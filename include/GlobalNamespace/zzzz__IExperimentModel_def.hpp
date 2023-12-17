#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExperimentModel)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IExperimentData;
}
// Forward declare root types
namespace GlobalNamespace {
class IExperimentModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IExperimentModel);
// Type: ::IExperimentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4185))
// CS Name: ::IExperimentModel*
class CORDL_TYPE IExperimentModel {
public:
// Declarations
/// @brief Method IsEmployee addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* IsEmployee() ;

/// @brief Method IsInTest addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "IExperimentModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IExperimentModel(IExperimentModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IExperimentModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExperimentModel(IExperimentModel const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IExperimentModel*, "", "IExperimentModel");
