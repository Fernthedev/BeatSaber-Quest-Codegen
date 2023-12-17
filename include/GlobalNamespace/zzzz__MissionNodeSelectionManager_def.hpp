#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionNodeSelectionManager)
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeSelectionManager);
// Type: ::MissionNodeSelectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5547))
// CS Name: ::MissionNodeSelectionManager*
class CORDL_TYPE MissionNodeSelectionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionNodesManager offset 0x18
 __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager)) ::GlobalNamespace::MissionNodesManager*  _missionNodesManager;

/// @brief Field didSelectMissionNodeEvent offset 0x20
 __declspec(property(get=__get_didSelectMissionNodeEvent, put=__set_didSelectMissionNodeEvent)) ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*  didSelectMissionNodeEvent;

/// @brief Field _missionNodes offset 0x28
 __declspec(property(get=__get__missionNodes, put=__set__missionNodes)) ::ArrayW<::GlobalNamespace::MissionNode*,::Array<::GlobalNamespace::MissionNode*>*>  _missionNodes;

/// @brief Field _selectedNode offset 0x30
 __declspec(property(get=__get__selectedNode, put=__set__selectedNode)) ::GlobalNamespace::MissionNodeVisualController*  _selectedNode;

constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager*  value) ;

constexpr ::GlobalNamespace::MissionNodesManager* __get__missionNodesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> __get__missionNodesManager() const;

constexpr void __set_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* __get_didSelectMissionNodeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*> __get_didSelectMissionNodeEvent() const;

constexpr void __set__missionNodes(::ArrayW<::GlobalNamespace::MissionNode*,::Array<::GlobalNamespace::MissionNode*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionNode*,::Array<::GlobalNamespace::MissionNode*>*>& __get__missionNodes() ;

constexpr ::ArrayW<::GlobalNamespace::MissionNode*,::Array<::GlobalNamespace::MissionNode*>*> const& __get__missionNodes() const;

constexpr void __set__selectedNode(::GlobalNamespace::MissionNodeVisualController*  value) ;

constexpr ::GlobalNamespace::MissionNodeVisualController* __get__selectedNode() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeVisualController*> __get__selectedNode() const;

/// @brief Method add_didSelectMissionNodeEvent addr 0x22a0894 size 0xb0 virtual false final false
inline void add_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*  value) ;

/// @brief Method remove_didSelectMissionNodeEvent addr 0x22a0944 size 0xb0 virtual false final false
inline void remove_didSelectMissionNodeEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*  value) ;

/// @brief Method DeselectSelectedNode addr 0x22a09f4 size 0x80 virtual false final false
inline void DeselectSelectedNode() ;

/// @brief Method Start addr 0x22a0aa0 size 0x138 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22a0d38 size 0x170 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleNodeWasSelect addr 0x22a1008 size 0xb4 virtual false final false
inline void HandleNodeWasSelect(::GlobalNamespace::MissionNodeVisualController*  missionNode) ;

/// @brief Method HandleNodeWasDisplayed addr 0x22a10bc size 0x80 virtual false final false
inline void HandleNodeWasDisplayed(::GlobalNamespace::MissionNodeVisualController*  missionNode) ;

static inline ::GlobalNamespace::MissionNodeSelectionManager* New_ctor() ;

/// @brief Method .ctor addr 0x22a113c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionNodeSelectionManager(MissionNodeSelectionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeSelectionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionNodeSelectionManager(MissionNodeSelectionManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionNodeSelectionManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeSelectionManager, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeSelectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
