#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UnauthorizedAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivilegeNotHeldException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Security::AccessControl {
class PrivilegeNotHeldException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::PrivilegeNotHeldException);
// Type: System.Security.AccessControl::PrivilegeNotHeldException
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2501))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3012))
// CS Name: ::System.Security.AccessControl::PrivilegeNotHeldException*
class CORDL_TYPE PrivilegeNotHeldException : public ::System::UnauthorizedAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::UnauthorizedAccessException)]{};

/// @brief Field _privilegeName offset 0x90
 __declspec(property(get=__get__privilegeName, put=__set__privilegeName)) ::StringW  _privilegeName;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set__privilegeName(::StringW  value) ;

constexpr ::StringW& __get__privilegeName() ;

constexpr ::StringW const& __get__privilegeName() const;

static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor() ;

/// @brief Method .ctor addr 0x2480530 size 0x4c virtual false final false
inline void _ctor() ;

static inline ::System::Security::AccessControl::PrivilegeNotHeldException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x248057c size 0x88 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x2480604 size 0xdc virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivilegeNotHeldException(PrivilegeNotHeldException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivilegeNotHeldException(PrivilegeNotHeldException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrivilegeNotHeldException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::PrivilegeNotHeldException, 0x98>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::PrivilegeNotHeldException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::PrivilegeNotHeldException*, "System.Security.AccessControl", "PrivilegeNotHeldException");
