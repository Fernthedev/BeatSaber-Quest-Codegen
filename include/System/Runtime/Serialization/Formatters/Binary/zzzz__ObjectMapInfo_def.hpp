#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectMapInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectMapInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectMapInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3280))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectMapInfo*
class CORDL_TYPE ObjectMapInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field objectId offset 0x10
 __declspec(property(get=__get_objectId, put=__set_objectId)) int32_t  objectId;

/// @brief Field numMembers offset 0x14
 __declspec(property(get=__get_numMembers, put=__set_numMembers)) int32_t  numMembers;

/// @brief Field memberNames offset 0x18
 __declspec(property(get=__get_memberNames, put=__set_memberNames)) ::ArrayW<::StringW,::Array<::StringW>*>  memberNames;

/// @brief Field memberTypes offset 0x20
 __declspec(property(get=__get_memberTypes, put=__set_memberTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes;

constexpr void __set_objectId(int32_t  value) ;

constexpr int32_t& __get_objectId() ;

constexpr int32_t const& __get_objectId() const;

constexpr void __set_numMembers(int32_t  value) ;

constexpr int32_t& __get_numMembers() ;

constexpr int32_t const& __get_numMembers() const;

constexpr void __set_memberNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_memberNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_memberNames() const;

constexpr void __set_memberTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __get_memberTypes() ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __get_memberTypes() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo* New_ctor(int32_t  objectId, int32_t  numMembers, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes) ;

/// @brief Method .ctor addr 0x24c71dc size 0x40 virtual false final false
inline void _ctor(int32_t  objectId, int32_t  numMembers, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes) ;

/// @brief Method isCompatible addr 0x24c70a0 size 0x13c virtual false final false
inline bool isCompatible(int32_t  numMembers, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes) ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectMapInfo(ObjectMapInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectMapInfo(ObjectMapInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectMapInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
