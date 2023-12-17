#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILateDisposable)
// Forward declare root types
namespace Zenject {
class ILateDisposable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ILateDisposable);
// Type: Zenject::ILateDisposable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15735))
// CS Name: ::Zenject::ILateDisposable*
class CORDL_TYPE ILateDisposable {
public:
// Declarations
/// @brief Method LateDispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LateDispose() ;

// Ctor Parameters [CppParam { name: "", ty: "ILateDisposable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ILateDisposable(ILateDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ILateDisposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILateDisposable(ILateDisposable const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ILateDisposable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ILateDisposable*, "Zenject", "ILateDisposable");
