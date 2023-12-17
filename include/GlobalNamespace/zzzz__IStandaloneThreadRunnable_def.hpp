#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStandaloneThreadRunnable)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneThreadRunnable);
// Type: ::IStandaloneThreadRunnable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12819))
// CS Name: ::IStandaloneThreadRunnable*
class CORDL_TYPE IStandaloneThreadRunnable {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool MoveNext() ;

// Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IStandaloneThreadRunnable(IStandaloneThreadRunnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStandaloneThreadRunnable(IStandaloneThreadRunnable const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunnable*, "", "IStandaloneThreadRunnable");
