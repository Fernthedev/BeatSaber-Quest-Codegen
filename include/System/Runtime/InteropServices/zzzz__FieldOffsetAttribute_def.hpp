#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldOffsetAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class FieldOffsetAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::FieldOffsetAttribute);
// Type: System.Runtime.InteropServices::FieldOffsetAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3331))
// CS Name: ::System.Runtime.InteropServices::FieldOffsetAttribute*
class CORDL_TYPE FieldOffsetAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _val offset 0x10
 __declspec(property(get=__get__val, put=__set__val)) int32_t  _val;

constexpr void __set__val(int32_t  value) ;

constexpr int32_t& __get__val() ;

constexpr int32_t const& __get__val() const;

static inline ::System::Runtime::InteropServices::FieldOffsetAttribute* New_ctor(int32_t  offset) ;

/// @brief Method .ctor addr 0x24d75ac size 0x28 virtual false final false
inline void _ctor(int32_t  offset) ;

// Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldOffsetAttribute(FieldOffsetAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldOffsetAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldOffsetAttribute(FieldOffsetAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FieldOffsetAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::FieldOffsetAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::FieldOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::FieldOffsetAttribute*, "System.Runtime.InteropServices", "FieldOffsetAttribute");
