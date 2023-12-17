#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectAce)
namespace System {
struct Guid;
}
namespace System::Security::AccessControl {
struct ObjectAceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System::Security::AccessControl {
struct AceType;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectAce);
// Type: System.Security.AccessControl::ObjectAce
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3046))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3042))
// CS Name: ::System.Security.AccessControl::ObjectAce*
class CORDL_TYPE ObjectAce : public ::System::Security::AccessControl::QualifiedAce {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Security::AccessControl::QualifiedAce)]{};

/// @brief Field object_ace_type offset 0x28
 __declspec(property(get=__get_object_ace_type, put=__set_object_ace_type)) ::System::Guid  object_ace_type;

/// @brief Field inherited_object_type offset 0x38
 __declspec(property(get=__get_inherited_object_type, put=__set_inherited_object_type)) ::System::Guid  inherited_object_type;

/// @brief Field object_ace_flags offset 0x48
 __declspec(property(get=__get_object_ace_flags, put=__set_object_ace_flags)) ::System::Security::AccessControl::ObjectAceFlags  object_ace_flags;

 __declspec(property(get=get_BinaryLength)) int32_t  BinaryLength;

 __declspec(property(get=get_InheritedObjectAceType, put=set_InheritedObjectAceType)) ::System::Guid  InheritedObjectAceType;

 __declspec(property(get=get_InheritedObjectAceTypePresent)) bool  InheritedObjectAceTypePresent;

 __declspec(property(get=get_ObjectAceFlags, put=set_ObjectAceFlags)) ::System::Security::AccessControl::ObjectAceFlags  ObjectAceFlags;

 __declspec(property(get=get_ObjectAceType, put=set_ObjectAceType)) ::System::Guid  ObjectAceType;

 __declspec(property(get=get_ObjectAceTypePresent)) bool  ObjectAceTypePresent;

constexpr void __set_object_ace_type(::System::Guid  value) ;

constexpr ::System::Guid& __get_object_ace_type() ;

constexpr ::System::Guid const& __get_object_ace_type() const;

constexpr void __set_inherited_object_type(::System::Guid  value) ;

constexpr ::System::Guid& __get_inherited_object_type() ;

constexpr ::System::Guid const& __get_inherited_object_type() const;

constexpr void __set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags  value) ;

constexpr ::System::Security::AccessControl::ObjectAceFlags& __get_object_ace_flags() ;

constexpr ::System::Security::AccessControl::ObjectAceFlags const& __get_object_ace_flags() const;

static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::System::Security::AccessControl::AceFlags  aceFlags, ::System::Security::AccessControl::AceQualifier  qualifier, int32_t  accessMask, ::System::Security::Principal::SecurityIdentifier*  sid, ::System::Security::AccessControl::ObjectAceFlags  flags, ::System::Guid  type, ::System::Guid  inheritedType, bool  isCallback, ::ArrayW<uint8_t,::Array<uint8_t>*>  opaque) ;

/// @brief Method .ctor addr 0x24824ac size 0x98 virtual false final false
inline void _ctor(::System::Security::AccessControl::AceFlags  aceFlags, ::System::Security::AccessControl::AceQualifier  qualifier, int32_t  accessMask, ::System::Security::Principal::SecurityIdentifier*  sid, ::System::Security::AccessControl::ObjectAceFlags  flags, ::System::Guid  type, ::System::Guid  inheritedType, bool  isCallback, ::ArrayW<uint8_t,::Array<uint8_t>*>  opaque) ;

static inline ::System::Security::AccessControl::ObjectAce* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  binaryForm, int32_t  offset) ;

/// @brief Method .ctor addr 0x24838ac size 0x264 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  binaryForm, int32_t  offset) ;

/// @brief Method get_BinaryLength addr 0x2484584 size 0x54 virtual true final false
inline int32_t get_BinaryLength() ;

/// @brief Method get_InheritedObjectAceType addr 0x24845d8 size 0xc virtual false final false
inline ::System::Guid get_InheritedObjectAceType() ;

/// @brief Method set_InheritedObjectAceType addr 0x24845e4 size 0x8 virtual false final false
inline void set_InheritedObjectAceType(::System::Guid  value) ;

/// @brief Method get_InheritedObjectAceTypePresent addr 0x24844e0 size 0xc virtual false final false
inline bool get_InheritedObjectAceTypePresent() ;

/// @brief Method get_ObjectAceFlags addr 0x24845ec size 0x8 virtual false final false
inline ::System::Security::AccessControl::ObjectAceFlags get_ObjectAceFlags() ;

/// @brief Method set_ObjectAceFlags addr 0x24845f4 size 0x8 virtual false final false
inline void set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags  value) ;

/// @brief Method get_ObjectAceType addr 0x24845fc size 0xc virtual false final false
inline ::System::Guid get_ObjectAceType() ;

/// @brief Method set_ObjectAceType addr 0x2484608 size 0x8 virtual false final false
inline void set_ObjectAceType(::System::Guid  value) ;

/// @brief Method get_ObjectAceTypePresent addr 0x24844d4 size 0xc virtual false final false
inline bool get_ObjectAceTypePresent() ;

/// @brief Method GetBinaryForm addr 0x2484610 size 0x16c virtual true final false
inline void GetBinaryForm(::ArrayW<uint8_t,::Array<uint8_t>*>  binaryForm, int32_t  offset) ;

/// @brief Method ConvertType addr 0x24843c4 size 0x110 virtual false final false
static inline ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier  qualifier, bool  isCallback) ;

/// @brief Method WriteGuid addr 0x248477c size 0x4c virtual false final false
inline void WriteGuid(::System::Guid  val, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset) ;

/// @brief Method ReadGuid addr 0x24844ec size 0x98 virtual false final false
inline ::System::Guid ReadGuid(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset) ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectAce(ObjectAce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectAce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectAce(ObjectAce const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectAce()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectAce, 0x50>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectAce*, "System.Security.AccessControl", "ObjectAce");
