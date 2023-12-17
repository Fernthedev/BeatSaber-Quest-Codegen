#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InterfaceTypeAttribute)
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class InterfaceTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::InterfaceTypeAttribute);
// Type: System.Runtime.InteropServices::InterfaceTypeAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3315))
// CS Name: ::System.Runtime.InteropServices::InterfaceTypeAttribute*
class CORDL_TYPE InterfaceTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _val offset 0x10
 __declspec(property(get=__get__val, put=__set__val)) ::System::Runtime::InteropServices::ComInterfaceType  _val;

constexpr void __set__val(::System::Runtime::InteropServices::ComInterfaceType  value) ;

constexpr ::System::Runtime::InteropServices::ComInterfaceType& __get__val() ;

constexpr ::System::Runtime::InteropServices::ComInterfaceType const& __get__val() const;

static inline ::System::Runtime::InteropServices::InterfaceTypeAttribute* New_ctor(::System::Runtime::InteropServices::ComInterfaceType  interfaceType) ;

/// @brief Method .ctor addr 0x24d71f8 size 0x28 virtual false final false
inline void _ctor(::System::Runtime::InteropServices::ComInterfaceType  interfaceType) ;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InterfaceTypeAttribute(InterfaceTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InterfaceTypeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InterfaceTypeAttribute(InterfaceTypeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InterfaceTypeAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::InterfaceTypeAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::InterfaceTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InterfaceTypeAttribute*, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
