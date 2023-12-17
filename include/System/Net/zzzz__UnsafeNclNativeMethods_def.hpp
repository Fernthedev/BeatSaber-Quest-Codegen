#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNclNativeMethods)
namespace System::Net {
class __UnsafeNclNativeMethods__HttpApi;
}
namespace System::Net {
class __UnsafeNclNativeMethods__SecureStringHelper;
}
namespace GlobalNamespace {
class __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;
}
namespace System::Security {
class SecureString;
}
// Forward declare root types
namespace GlobalNamespace {
class __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class UnsafeNclNativeMethods;
}
namespace System::Net {
class __UnsafeNclNativeMethods__HttpApi;
}
namespace System::Net {
class __UnsafeNclNativeMethods__SecureStringHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID);
MARK_REF_PTR_T(::System::Net::UnsafeNclNativeMethods);
MARK_REF_PTR_T(::System::Net::__UnsafeNclNativeMethods__HttpApi);
MARK_REF_PTR_T(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper);
// Type: ::HTTP_REQUEST_HEADER_ID
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9141))
// CS Name: ::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*
class CORDL_TYPE __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_Strings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_m_Strings() ;

/// @brief Method ToString addr 0x29b9a9c size 0x7c virtual false final false
static inline ::StringW ToString(int32_t  position) ;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID()  = default;
public:


// Fields

// Static field m_Strings


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HttpApi
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9142))
// CS Name: ::UnsafeNclNativeMethods::HttpApi*
class CORDL_TYPE __UnsafeNclNativeMethods__HttpApi : public ::System::Object {
public:
// Declarations
using HTTP_REQUEST_HEADER_ID = ::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_Strings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_m_Strings() ;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnsafeNclNativeMethods__HttpApi(__UnsafeNclNativeMethods__HttpApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnsafeNclNativeMethods__HttpApi(__UnsafeNclNativeMethods__HttpApi const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnsafeNclNativeMethods__HttpApi()  = default;
public:


// Fields

// Static field m_Strings


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__UnsafeNclNativeMethods__HttpApi, 0x10>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::SecureStringHelper
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9143))
// CS Name: ::UnsafeNclNativeMethods::SecureStringHelper*
class CORDL_TYPE __UnsafeNclNativeMethods__SecureStringHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateString addr 0x29ba5dc size 0x1b0 virtual false final false
static inline ::StringW CreateString(::System::Security::SecureString*  secureString) ;

/// @brief Method CreateSecureString addr 0x29ba78c size 0xac virtual false final false
static inline ::System::Security::SecureString* CreateSecureString(::StringW  plainString) ;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__SecureStringHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnsafeNclNativeMethods__SecureStringHelper(__UnsafeNclNativeMethods__SecureStringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__SecureStringHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnsafeNclNativeMethods__SecureStringHelper(__UnsafeNclNativeMethods__SecureStringHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnsafeNclNativeMethods__SecureStringHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__UnsafeNclNativeMethods__SecureStringHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::UnsafeNclNativeMethods
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9144))
// CS Name: ::System.Net::UnsafeNclNativeMethods*
class CORDL_TYPE UnsafeNclNativeMethods : public ::System::Object {
public:
// Declarations
using SecureStringHelper = ::System::Net::__UnsafeNclNativeMethods__SecureStringHelper;

using HttpApi = ::System::Net::__UnsafeNclNativeMethods__HttpApi;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeNclNativeMethods(UnsafeNclNativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeNclNativeMethods(UnsafeNclNativeMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnsafeNclNativeMethods()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::UnsafeNclNativeMethods, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID*, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods*, "System.Net", "UnsafeNclNativeMethods");
NEED_NO_BOX(::System::Net::__UnsafeNclNativeMethods__HttpApi);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__UnsafeNclNativeMethods__HttpApi*, "System.Net", "UnsafeNclNativeMethods/HttpApi");
NEED_NO_BOX(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
