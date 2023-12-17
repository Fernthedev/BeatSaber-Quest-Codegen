#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAttributeNamedArgument)
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CustomAttributeNamedArgument);
// Type: System.Reflection::CustomAttributeNamedArgument
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3503))
// CS Name: ::System.Reflection::CustomAttributeNamedArgument
struct CORDL_TYPE CustomAttributeNamedArgument : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <TypedValue>k__BackingField offset 0x0
 __declspec(property(get=__get__TypedValue_k__BackingField, put=__set__TypedValue_k__BackingField)) ::System::Reflection::CustomAttributeTypedArgument  _TypedValue_k__BackingField;

/// @brief Field <IsField>k__BackingField offset 0x10
 __declspec(property(get=__get__IsField_k__BackingField, put=__set__IsField_k__BackingField)) bool  _IsField_k__BackingField;

/// @brief Field <MemberName>k__BackingField offset 0x18
 __declspec(property(get=__get__MemberName_k__BackingField, put=__set__MemberName_k__BackingField)) ::StringW  _MemberName_k__BackingField;

/// @brief Field _attributeType offset 0x20
 __declspec(property(get=__get__attributeType, put=__set__attributeType)) ::System::Type*  _attributeType;

/// @brief Field _lazyMemberInfo offset 0x28
 __declspec(property(get=__get__lazyMemberInfo, put=__set__lazyMemberInfo)) ::System::Reflection::MemberInfo*  _lazyMemberInfo;

 __declspec(property(get=get_TypedValue)) ::System::Reflection::CustomAttributeTypedArgument  TypedValue;

 __declspec(property(get=get_IsField)) bool  IsField;

 __declspec(property(get=get_MemberName)) ::StringW  MemberName;

 __declspec(property(get=get_MemberInfo)) ::System::Reflection::MemberInfo*  MemberInfo;

constexpr void __set__TypedValue_k__BackingField(::System::Reflection::CustomAttributeTypedArgument  value) ;

constexpr ::System::Reflection::CustomAttributeTypedArgument& __get__TypedValue_k__BackingField() ;

constexpr ::System::Reflection::CustomAttributeTypedArgument const& __get__TypedValue_k__BackingField() const;

constexpr void __set__IsField_k__BackingField(bool  value) ;

constexpr bool& __get__IsField_k__BackingField() ;

constexpr bool const& __get__IsField_k__BackingField() const;

constexpr void __set__MemberName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__MemberName_k__BackingField() ;

constexpr ::StringW const& __get__MemberName_k__BackingField() const;

constexpr void __set__attributeType(::System::Type*  value) ;

constexpr ::System::Type* __get__attributeType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__attributeType() const;

constexpr void __set__lazyMemberInfo(::System::Reflection::MemberInfo*  value) ;

constexpr ::System::Reflection::MemberInfo* __get__lazyMemberInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> __get__lazyMemberInfo() const;

/// @brief Method .ctor addr 0x24ec874 size 0x28 virtual false final false
inline void _ctor(::System::Type*  attributeType, ::StringW  memberName, bool  isField, ::System::Reflection::CustomAttributeTypedArgument  typedValue) ;

/// @brief Method .ctor addr 0x24ec89c size 0x22c virtual false final false
inline void _ctor(::System::Reflection::MemberInfo*  memberInfo, ::System::Object*  value) ;

/// @brief Method .ctor addr 0x24ecac8 size 0x124 virtual false final false
inline void _ctor(::System::Reflection::MemberInfo*  memberInfo, ::System::Reflection::CustomAttributeTypedArgument  typedArgument) ;

/// @brief Method get_TypedValue addr 0x24ecbec size 0xc virtual false final false
inline ::System::Reflection::CustomAttributeTypedArgument get_TypedValue() ;

/// @brief Method get_IsField addr 0x24ecbf8 size 0x8 virtual false final false
inline bool get_IsField() ;

/// @brief Method get_MemberName addr 0x24ecc00 size 0x8 virtual false final false
inline ::StringW get_MemberName() ;

/// @brief Method get_MemberInfo addr 0x24ecc08 size 0x118 virtual false final false
inline ::System::Reflection::MemberInfo* get_MemberInfo() ;

/// @brief Method Equals addr 0x24ecd20 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x24ecd98 size 0x6c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x24ece04 size 0x80 virtual false final false
static inline bool op_Equality(::System::Reflection::CustomAttributeNamedArgument  left, ::System::Reflection::CustomAttributeNamedArgument  right) ;

/// @brief Method op_Inequality addr 0x24ece84 size 0x84 virtual false final false
static inline bool op_Inequality(::System::Reflection::CustomAttributeNamedArgument  left, ::System::Reflection::CustomAttributeNamedArgument  right) ;

/// @brief Method ToString addr 0x24ecf08 size 0x38c virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_TypedValue_k__BackingField", ty: "::System::Reflection::CustomAttributeTypedArgument", modifiers: "", def_value: None }, CppParam { name: "_IsField_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_MemberName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_attributeType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_lazyMemberInfo", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: None }]
constexpr CustomAttributeNamedArgument(::System::Reflection::CustomAttributeTypedArgument  _TypedValue_k__BackingField, bool  _IsField_k__BackingField, ::StringW  _MemberName_k__BackingField, ::System::Type*  _attributeType, ::System::Reflection::MemberInfo*  _lazyMemberInfo) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CustomAttributeNamedArgument(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CustomAttributeNamedArgument()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeNamedArgument, 0x30>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeNamedArgument, "System.Reflection", "CustomAttributeNamedArgument");
