#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SwitchLevelAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class SwitchLevelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::SwitchLevelAttribute);
// Type: System.Diagnostics::SwitchLevelAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8936))
// CS Name: ::System.Diagnostics::SwitchLevelAttribute*
class CORDL_TYPE SwitchLevelAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

 __declspec(property(put=set_SwitchLevelType)) ::System::Type*  SwitchLevelType;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::System::Diagnostics::SwitchLevelAttribute* New_ctor(::System::Type*  switchLevelType) ;

/// @brief Method .ctor addr 0x296c51c size 0x2c virtual false final false
inline void _ctor(::System::Type*  switchLevelType) ;

/// @brief Method set_SwitchLevelType addr 0x296c548 size 0xc0 virtual false final false
inline void set_SwitchLevelType(::System::Type*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchLevelAttribute(SwitchLevelAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchLevelAttribute(SwitchLevelAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SwitchLevelAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SwitchLevelAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::SwitchLevelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SwitchLevelAttribute*, "System.Diagnostics", "SwitchLevelAttribute");
