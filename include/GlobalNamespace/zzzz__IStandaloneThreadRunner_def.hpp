#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStandaloneThreadRunner)
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneThreadRunner);
// Type: ::IStandaloneThreadRunner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12818))
// CS Name: ::IStandaloneThreadRunner*
class CORDL_TYPE IStandaloneThreadRunner {
public:
// Declarations
/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Run(::GlobalNamespace::IStandaloneThreadRunnable*  runnable) ;

// Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IStandaloneThreadRunner(IStandaloneThreadRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStandaloneThreadRunner(IStandaloneThreadRunner const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunner*, "", "IStandaloneThreadRunner");
