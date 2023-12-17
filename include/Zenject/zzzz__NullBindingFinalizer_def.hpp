#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullBindingFinalizer)
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class NullBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NullBindingFinalizer);
// Type: Zenject::NullBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10954))
// CS Name: ::Zenject::NullBindingFinalizer*
class CORDL_TYPE NullBindingFinalizer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_BindingInheritanceMethod)) ::Zenject::BindingInheritanceMethods  BindingInheritanceMethod;

/// @brief Convert operator to "::Zenject::IBindingFinalizer"
constexpr operator  ::Zenject::IBindingFinalizer*() noexcept;

/// @brief Method get_BindingInheritanceMethod addr 0x2ee1f08 size 0x8 virtual true final true
inline ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod() ;

/// @brief Method FinalizeBinding addr 0x2ee1f10 size 0x4 virtual true final true
inline void FinalizeBinding(::Zenject::DiContainer*  container) ;

static inline ::Zenject::NullBindingFinalizer* New_ctor() ;

/// @brief Method .ctor addr 0x2ee1f14 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullBindingFinalizer(NullBindingFinalizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullBindingFinalizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullBindingFinalizer(NullBindingFinalizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullBindingFinalizer()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NullBindingFinalizer, 0x10>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::NullBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NullBindingFinalizer*, "Zenject", "NullBindingFinalizer");
