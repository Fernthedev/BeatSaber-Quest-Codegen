#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ComDefaultInterfaceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComDefaultInterfaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute);
// Type: System.Runtime.InteropServices::ComDefaultInterfaceAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3316))
// CS Name: ::System.Runtime.InteropServices::ComDefaultInterfaceAttribute*
class CORDL_TYPE ComDefaultInterfaceAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _val offset 0x10
 __declspec(property(get=__get__val, put=__set__val)) ::System::Type*  _val;

constexpr void __set__val(::System::Type*  value) ;

constexpr ::System::Type* __get__val() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__val() const;

static inline ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute* New_ctor(::System::Type*  defaultInterface) ;

/// @brief Method .ctor addr 0x24d7220 size 0x28 virtual false final false
inline void _ctor(::System::Type*  defaultInterface) ;

// Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComDefaultInterfaceAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComDefaultInterfaceAttribute(ComDefaultInterfaceAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComDefaultInterfaceAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*, "System.Runtime.InteropServices", "ComDefaultInterfaceAttribute");
