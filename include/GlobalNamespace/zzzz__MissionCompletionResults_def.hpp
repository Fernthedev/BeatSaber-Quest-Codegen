#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionCompletionResults)
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionCompletionResults);
// Type: ::MissionCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4454))
// CS Name: ::MissionCompletionResults*
class CORDL_TYPE MissionCompletionResults : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field levelCompletionResults offset 0x10
 __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults;

/// @brief Field missionObjectiveResults offset 0x18
 __declspec(property(get=__get_missionObjectiveResults, put=__set_missionObjectiveResults)) ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults;

 __declspec(property(get=get_IsMissionComplete)) bool  IsMissionComplete;

constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value) ;

constexpr ::GlobalNamespace::LevelCompletionResults* __get_levelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> __get_levelCompletionResults() const;

constexpr void __set_missionObjectiveResults(::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>& __get_missionObjectiveResults() ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*> const& __get_missionObjectiveResults() const;

/// @brief Method get_IsMissionComplete addr 0x2352510 size 0x68 virtual false final false
inline bool get_IsMissionComplete() ;

static inline ::GlobalNamespace::MissionCompletionResults* New_ctor(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults) ;

/// @brief Method .ctor addr 0x2352578 size 0x2c virtual false final false
inline void _ctor(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults) ;

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionCompletionResults(MissionCompletionResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionCompletionResults(MissionCompletionResults const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionCompletionResults()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionCompletionResults, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionCompletionResults*, "", "MissionCompletionResults");
