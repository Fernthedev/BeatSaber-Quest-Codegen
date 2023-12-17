#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeGizmos)
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeGizmos;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeGizmos);
// Type: ::MissionNodeGizmos
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5545))
// CS Name: ::MissionNodeGizmos*
class CORDL_TYPE MissionNodeGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionNode offset 0x18
 __declspec(property(get=__get__missionNode, put=__set__missionNode)) ::GlobalNamespace::MissionNode*  _missionNode;

/// @brief Field _gameplayModifiersModel offset 0x20
 __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel)) ::GlobalNamespace::GameplayModifiersModelSO*  _gameplayModifiersModel;

/// @brief Field _missionProgressModel offset 0x28
 __declspec(property(get=__get__missionProgressModel, put=__set__missionProgressModel)) ::GlobalNamespace::CampaignProgressModel*  _missionProgressModel;

constexpr void __set__missionNode(::GlobalNamespace::MissionNode*  value) ;

constexpr ::GlobalNamespace::MissionNode* __get__missionNode() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> __get__missionNode() const;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO*  value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO* __get__gameplayModifiersModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> __get__gameplayModifiersModel() const;

constexpr void __set__missionProgressModel(::GlobalNamespace::CampaignProgressModel*  value) ;

constexpr ::GlobalNamespace::CampaignProgressModel* __get__missionProgressModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> __get__missionProgressModel() const;

static inline ::GlobalNamespace::MissionNodeGizmos* New_ctor() ;

/// @brief Method .ctor addr 0x22a0884 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionNodeGizmos(MissionNodeGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionNodeGizmos(MissionNodeGizmos const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionNodeGizmos()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeGizmos, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeGizmos);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeGizmos*, "", "MissionNodeGizmos");
