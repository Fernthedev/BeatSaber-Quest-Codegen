#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTypeFixupInfo)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ValueTypeFixupInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ValueTypeFixupInfo);
// Type: System.Runtime.Serialization::ValueTypeFixupInfo
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3211))
// CS Name: ::System.Runtime.Serialization::ValueTypeFixupInfo*
class CORDL_TYPE ValueTypeFixupInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _containerID offset 0x10
 __declspec(property(get=__get__containerID, put=__set__containerID)) int64_t  _containerID;

/// @brief Field _parentField offset 0x18
 __declspec(property(get=__get__parentField, put=__set__parentField)) ::System::Reflection::FieldInfo*  _parentField;

/// @brief Field _parentIndex offset 0x20
 __declspec(property(get=__get__parentIndex, put=__set__parentIndex)) ::ArrayW<int32_t,::Array<int32_t>*>  _parentIndex;

 __declspec(property(get=get_ContainerID)) int64_t  ContainerID;

 __declspec(property(get=get_ParentField)) ::System::Reflection::FieldInfo*  ParentField;

 __declspec(property(get=get_ParentIndex)) ::ArrayW<int32_t,::Array<int32_t>*>  ParentIndex;

constexpr void __set__containerID(int64_t  value) ;

constexpr int64_t& __get__containerID() ;

constexpr int64_t const& __get__containerID() const;

constexpr void __set__parentField(::System::Reflection::FieldInfo*  value) ;

constexpr ::System::Reflection::FieldInfo* __get__parentField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> __get__parentField() const;

constexpr void __set__parentIndex(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__parentIndex() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__parentIndex() const;

static inline ::System::Runtime::Serialization::ValueTypeFixupInfo* New_ctor(int64_t  containerID, ::System::Reflection::FieldInfo*  member, ::ArrayW<int32_t,::Array<int32_t>*>  parentIndex) ;

/// @brief Method .ctor addr 0x24b5ba4 size 0x150 virtual false final false
inline void _ctor(int64_t  containerID, ::System::Reflection::FieldInfo*  member, ::ArrayW<int32_t,::Array<int32_t>*>  parentIndex) ;

/// @brief Method get_ContainerID addr 0x24b5cf4 size 0x8 virtual false final false
inline int64_t get_ContainerID() ;

/// @brief Method get_ParentField addr 0x24b5cfc size 0x8 virtual false final false
inline ::System::Reflection::FieldInfo* get_ParentField() ;

/// @brief Method get_ParentIndex addr 0x24b5d04 size 0x8 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_ParentIndex() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueTypeFixupInfo(ValueTypeFixupInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueTypeFixupInfo(ValueTypeFixupInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueTypeFixupInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ValueTypeFixupInfo, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ValueTypeFixupInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ValueTypeFixupInfo*, "System.Runtime.Serialization", "ValueTypeFixupInfo");
