#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataMemberAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataMemberAttribute);
// Type: System.Runtime.Serialization::DataMemberAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16240))
// CS Name: ::System.Runtime.Serialization::DataMemberAttribute*
class CORDL_TYPE DataMemberAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field order offset 0x18
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

/// @brief Field isRequired offset 0x1c
 __declspec(property(get=__get_isRequired, put=__set_isRequired)) bool  isRequired;

/// @brief Field emitDefaultValue offset 0x1d
 __declspec(property(get=__get_emitDefaultValue, put=__set_emitDefaultValue)) bool  emitDefaultValue;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Order)) int32_t  Order;

 __declspec(property(get=get_IsRequired)) bool  IsRequired;

 __declspec(property(get=get_EmitDefaultValue)) bool  EmitDefaultValue;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

constexpr void __set_isRequired(bool  value) ;

constexpr bool& __get_isRequired() ;

constexpr bool const& __get_isRequired() const;

constexpr void __set_emitDefaultValue(bool  value) ;

constexpr bool& __get_emitDefaultValue() ;

constexpr bool const& __get_emitDefaultValue() const;

/// @brief Method get_Name addr 0x284d5fc size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_Order addr 0x284d604 size 0x8 virtual false final false
inline int32_t get_Order() ;

/// @brief Method get_IsRequired addr 0x284d60c size 0x8 virtual false final false
inline bool get_IsRequired() ;

/// @brief Method get_EmitDefaultValue addr 0x284d614 size 0x8 virtual false final false
inline bool get_EmitDefaultValue() ;

// Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataMemberAttribute(DataMemberAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataMemberAttribute(DataMemberAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DataMemberAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataMemberAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataMemberAttribute*, "System.Runtime.Serialization", "DataMemberAttribute");
