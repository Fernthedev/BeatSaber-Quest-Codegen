#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class NullableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::NullableAttribute);
// Type: System.Runtime.CompilerServices::NullableAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15838))
// CS Name: ::System.Runtime.CompilerServices::NullableAttribute*
class CORDL_TYPE NullableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field NullableFlags offset 0x10
 __declspec(property(get=__get_NullableFlags, put=__set_NullableFlags)) ::ArrayW<uint8_t,::Array<uint8_t>*>  NullableFlags;

constexpr void __set_NullableFlags(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_NullableFlags() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_NullableFlags() const;

static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(uint8_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor addr 0xe26510 size 0x80 virtual false final false
inline void _ctor(uint8_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Runtime::CompilerServices::NullableAttribute* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor addr 0xe26590 size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullableAttribute(NullableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullableAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullableAttribute(NullableAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullableAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::NullableAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::NullableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::NullableAttribute*, "System.Runtime.CompilerServices", "NullableAttribute");
