#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeNameGenerator)
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeNameGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeNameGenerator);
// Type: ::MissionNodeNameGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5546))
// CS Name: ::MissionNodeNameGenerator*
class CORDL_TYPE MissionNodeNameGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionNodesManager offset 0x18
 __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager)) ::GlobalNamespace::MissionNodesManager*  _missionNodesManager;

constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager*  value) ;

constexpr ::GlobalNamespace::MissionNodesManager* __get__missionNodesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> __get__missionNodesManager() const;

static inline ::GlobalNamespace::MissionNodeNameGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x22a088c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionNodeNameGenerator(MissionNodeNameGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionNodeNameGenerator(MissionNodeNameGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionNodeNameGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeNameGenerator, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeNameGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeNameGenerator*, "", "MissionNodeNameGenerator");
