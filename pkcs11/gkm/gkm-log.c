/*
 * gnome-keyring
 *
 * Copyright (C) 2008 Stefan Walter
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see
 * <http://www.gnu.org/licenses/>.
 */

#include "config.h"

#include "gkm-log.h"

#include "pkcs11/pkcs11.h"
#include "pkcs11/pkcs11i.h"
#include "pkcs11/pkcs11n.h"
#include "pkcs11/pkcs11x.h"

const gchar*
gkm_log_rv (CK_RV rv)
{
	const gchar *string = NULL;

	switch (rv) {
	#define X(x) case x: string = #x; break;
	X (CKR_OK)
	X (CKR_NO_EVENT)
	X (CKR_FUNCTION_NOT_PARALLEL)
	X (CKR_SESSION_PARALLEL_NOT_SUPPORTED)
	X (CKR_CANCEL)
	X (CKR_FUNCTION_CANCELED)
	X (CKR_HOST_MEMORY)
	X (CKR_SLOT_ID_INVALID)
	X (CKR_GENERAL_ERROR)
	X (CKR_FUNCTION_FAILED)
	X (CKR_ARGUMENTS_BAD)
	X (CKR_NEED_TO_CREATE_THREADS)
	X (CKR_CANT_LOCK)
	X (CKR_ATTRIBUTE_READ_ONLY)
	X (CKR_ATTRIBUTE_SENSITIVE)
	X (CKR_ATTRIBUTE_TYPE_INVALID)
	X (CKR_ATTRIBUTE_VALUE_INVALID)
	X (CKR_DATA_INVALID)
	X (CKR_DATA_LEN_RANGE)
	X (CKR_DEVICE_ERROR)
	X (CKR_DEVICE_MEMORY)
	X (CKR_DEVICE_REMOVED)
	X (CKR_ENCRYPTED_DATA_INVALID)
	X (CKR_ENCRYPTED_DATA_LEN_RANGE)
	X (CKR_FUNCTION_NOT_SUPPORTED)
	X (CKR_KEY_HANDLE_INVALID)
	X (CKR_KEY_SIZE_RANGE)
	X (CKR_KEY_TYPE_INCONSISTENT)
	X (CKR_KEY_NOT_NEEDED)
	X (CKR_KEY_CHANGED)
	X (CKR_KEY_NEEDED)
	X (CKR_KEY_INDIGESTIBLE)
	X (CKR_KEY_FUNCTION_NOT_PERMITTED)
	X (CKR_KEY_NOT_WRAPPABLE)
	X (CKR_KEY_UNEXTRACTABLE)
	X (CKR_MECHANISM_INVALID)
	X (CKR_MECHANISM_PARAM_INVALID)
	X (CKR_OBJECT_HANDLE_INVALID)
	X (CKR_OPERATION_ACTIVE)
	X (CKR_OPERATION_NOT_INITIALIZED)
	X (CKR_PIN_INCORRECT)
	X (CKR_PIN_INVALID)
	X (CKR_PIN_LEN_RANGE)
	X (CKR_PIN_EXPIRED)
	X (CKR_PIN_LOCKED)
	X (CKR_SESSION_CLOSED)
	X (CKR_SESSION_COUNT)
	X (CKR_SESSION_HANDLE_INVALID)
	X (CKR_SESSION_READ_ONLY)
	X (CKR_SESSION_EXISTS)
	X (CKR_SESSION_READ_ONLY_EXISTS)
	X (CKR_SESSION_READ_WRITE_SO_EXISTS)
	X (CKR_SIGNATURE_INVALID)
	X (CKR_SIGNATURE_LEN_RANGE)
	X (CKR_TEMPLATE_INCOMPLETE)
	X (CKR_TEMPLATE_INCONSISTENT)
	X (CKR_TOKEN_NOT_PRESENT)
	X (CKR_TOKEN_NOT_RECOGNIZED)
	X (CKR_TOKEN_WRITE_PROTECTED)
	X (CKR_UNWRAPPING_KEY_HANDLE_INVALID)
	X (CKR_UNWRAPPING_KEY_SIZE_RANGE)
	X (CKR_UNWRAPPING_KEY_TYPE_INCONSISTENT)
	X (CKR_USER_ALREADY_LOGGED_IN)
	X (CKR_USER_NOT_LOGGED_IN)
	X (CKR_USER_PIN_NOT_INITIALIZED)
	X (CKR_USER_TYPE_INVALID)
	X (CKR_USER_ANOTHER_ALREADY_LOGGED_IN)
	X (CKR_USER_TOO_MANY_TYPES)
	X (CKR_WRAPPED_KEY_INVALID)
	X (CKR_WRAPPED_KEY_LEN_RANGE)
	X (CKR_WRAPPING_KEY_HANDLE_INVALID)
	X (CKR_WRAPPING_KEY_SIZE_RANGE)
	X (CKR_WRAPPING_KEY_TYPE_INCONSISTENT)
	X (CKR_RANDOM_SEED_NOT_SUPPORTED)
	X (CKR_RANDOM_NO_RNG)
	X (CKR_DOMAIN_PARAMS_INVALID)
	X (CKR_BUFFER_TOO_SMALL)
	X (CKR_SAVED_STATE_INVALID)
	X (CKR_INFORMATION_SENSITIVE)
	X (CKR_STATE_UNSAVEABLE)
	X (CKR_CRYPTOKI_NOT_INITIALIZED)
	X (CKR_CRYPTOKI_ALREADY_INITIALIZED)
	X (CKR_MUTEX_BAD)
	X (CKR_MUTEX_NOT_LOCKED)
	X (CKR_FUNCTION_REJECTED)
	#undef X
	}

	if (string == NULL) {
		gchar buffer[64];
		g_snprintf (buffer, sizeof (buffer), "CKR_0x%08lX", rv);
		string = g_intern_string (buffer);
	}

	return string;
}

const gchar*
gkm_log_attr_type (CK_ATTRIBUTE_TYPE type)
{
	const gchar *string = NULL;

	switch (type) {
	#define X(x) case x: string = #x; break;
	X (CKA_CLASS)
	X (CKA_TOKEN)
	X (CKA_PRIVATE)
	X (CKA_LABEL)
	X (CKA_APPLICATION)
	X (CKA_VALUE)
	X (CKA_OBJECT_ID)
	X (CKA_CERTIFICATE_TYPE)
	X (CKA_ISSUER)
	X (CKA_SERIAL_NUMBER)
	X (CKA_AC_ISSUER)
	X (CKA_OWNER)
	X (CKA_ATTR_TYPES)
	X (CKA_TRUSTED)
	X (CKA_CERTIFICATE_CATEGORY)
	X (CKA_JAVA_MIDP_SECURITY_DOMAIN)
	X (CKA_URL)
	X (CKA_HASH_OF_SUBJECT_PUBLIC_KEY)
	X (CKA_HASH_OF_ISSUER_PUBLIC_KEY)
	X (CKA_CHECK_VALUE)
	X (CKA_KEY_TYPE)
	X (CKA_SUBJECT)
	X (CKA_ID)
	X (CKA_SENSITIVE)
	X (CKA_ENCRYPT)
	X (CKA_DECRYPT)
	X (CKA_WRAP)
	X (CKA_UNWRAP)
	X (CKA_SIGN)
	X (CKA_SIGN_RECOVER)
	X (CKA_VERIFY)
	X (CKA_VERIFY_RECOVER)
	X (CKA_DERIVE)
	X (CKA_START_DATE)
	X (CKA_END_DATE)
	X (CKA_MODULUS)
	X (CKA_MODULUS_BITS)
	X (CKA_PUBLIC_EXPONENT)
	X (CKA_PRIVATE_EXPONENT)
	X (CKA_PRIME_1)
	X (CKA_PRIME_2)
	X (CKA_EXPONENT_1)
	X (CKA_EXPONENT_2)
	X (CKA_COEFFICIENT)
	X (CKA_PRIME)
	X (CKA_SUBPRIME)
	X (CKA_BASE)
	X (CKA_PRIME_BITS)
	/* X (CKA_SUBPRIME_BITS) */
	/* X (CKA_SUB_PRIME_BITS) */
	X (CKA_VALUE_BITS)
	X (CKA_VALUE_LEN)
	X (CKA_EXTRACTABLE)
	X (CKA_LOCAL)
	X (CKA_NEVER_EXTRACTABLE)
	X (CKA_ALWAYS_SENSITIVE)
	X (CKA_KEY_GEN_MECHANISM)
	X (CKA_MODIFIABLE)
	X (CKA_ECDSA_PARAMS)
	/* X (CKA_EC_PARAMS) */
	X (CKA_EC_POINT)
	X (CKA_SECONDARY_AUTH)
	X (CKA_AUTH_PIN_FLAGS)
	X (CKA_ALWAYS_AUTHENTICATE)
	X (CKA_WRAP_WITH_TRUSTED)
	X (CKA_WRAP_TEMPLATE)
	X (CKA_UNWRAP_TEMPLATE)
	X (CKA_HW_FEATURE_TYPE)
	X (CKA_RESET_ON_INIT)
	X (CKA_HAS_RESET)
	X (CKA_PIXEL_X)
	X (CKA_PIXEL_Y)
	X (CKA_RESOLUTION)
	X (CKA_CHAR_ROWS)
	X (CKA_CHAR_COLUMNS)
	X (CKA_COLOR)
	X (CKA_BITS_PER_PIXEL)
	X (CKA_CHAR_SETS)
	X (CKA_ENCODING_METHODS)
	X (CKA_MIME_TYPES)
	X (CKA_MECHANISM_TYPE)
	X (CKA_REQUIRED_CMS_ATTRIBUTES)
	X (CKA_DEFAULT_CMS_ATTRIBUTES)
	X (CKA_SUPPORTED_CMS_ATTRIBUTES)
	X (CKA_ALLOWED_MECHANISMS)
	X (CKA_X_ASSERTION_TYPE)
	X (CKA_X_CERTIFICATE_VALUE)
	X (CKA_X_PURPOSE)
	X (CKA_X_PEER)
	X (CKA_NETSCAPE_URL)
	X (CKA_NETSCAPE_EMAIL)
	X (CKA_NETSCAPE_SMIME_INFO)
	X (CKA_NETSCAPE_SMIME_TIMESTAMP)
	X (CKA_NETSCAPE_PKCS8_SALT)
	X (CKA_NETSCAPE_PASSWORD_CHECK)
	X (CKA_NETSCAPE_EXPIRES)
	X (CKA_NETSCAPE_KRL)
	X (CKA_NETSCAPE_PQG_COUNTER)
	X (CKA_NETSCAPE_PQG_SEED)
	X (CKA_NETSCAPE_PQG_H)
	X (CKA_NETSCAPE_PQG_SEED_BITS)
	X (CKA_NETSCAPE_MODULE_SPEC)
	X (CKA_TRUST_DIGITAL_SIGNATURE)
	X (CKA_TRUST_NON_REPUDIATION)
	X (CKA_TRUST_KEY_ENCIPHERMENT)
	X (CKA_TRUST_DATA_ENCIPHERMENT)
	X (CKA_TRUST_KEY_AGREEMENT)
	X (CKA_TRUST_KEY_CERT_SIGN)
	X (CKA_TRUST_CRL_SIGN)
	X (CKA_TRUST_SERVER_AUTH)
	X (CKA_TRUST_CLIENT_AUTH)
	X (CKA_TRUST_CODE_SIGNING)
	X (CKA_TRUST_EMAIL_PROTECTION)
	X (CKA_TRUST_IPSEC_END_SYSTEM)
	X (CKA_TRUST_IPSEC_TUNNEL)
	X (CKA_TRUST_IPSEC_USER)
	X (CKA_TRUST_TIME_STAMPING)
	X (CKA_TRUST_STEP_UP_APPROVED)
	X (CKA_CERT_SHA1_HASH)
	X (CKA_CERT_MD5_HASH)
	X (CKA_NETSCAPE_DB)
	X (CKA_NETSCAPE_TRUST)
	X (CKA_GNOME_UNIQUE)
	X (CKA_GNOME_TRANSIENT)
	X (CKA_GNOME_INTERNAL_SHA1)
	X (CKA_G_LOCKED)
	X (CKA_G_CREATED)
	X (CKA_G_MODIFIED)
	X (CKA_G_FIELDS)
	X (CKA_G_COLLECTION)
	X (CKA_G_MATCHED)
	X (CKA_G_SCHEMA)
	X (CKA_G_LOGIN_COLLECTION)
	X (CKA_G_DESTRUCT_IDLE)
	X (CKA_G_DESTRUCT_AFTER)
	X (CKA_G_DESTRUCT_USES)
	X (CKA_G_OBJECT)
	X (CKA_G_CREDENTIAL)
	X (CKA_G_CREDENTIAL_TEMPLATE)
	#undef X
	}

	if (string == NULL) {
		gchar buffer[64];
		g_snprintf (buffer, sizeof (buffer), "CKA_0x%08lX", type);
		string = g_intern_string (buffer);
	}

	return string;
}
