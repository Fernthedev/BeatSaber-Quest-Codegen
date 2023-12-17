#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsManager)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class TrackLaneRing;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsManager);
// Type: ::TrackLaneRingsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5004))
// CS Name: ::TrackLaneRingsManager*
class CORDL_TYPE TrackLaneRingsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _trackLaneRingPrefab offset 0x18
 __declspec(property(get=__get__trackLaneRingPrefab, put=__set__trackLaneRingPrefab)) ::GlobalNamespace::TrackLaneRing*  _trackLaneRingPrefab;

/// @brief Field _ringCount offset 0x20
 __declspec(property(get=__get__ringCount, put=__set__ringCount)) int32_t  _ringCount;

/// @brief Field _ringPositionStep offset 0x24
 __declspec(property(get=__get__ringPositionStep, put=__set__ringPositionStep)) float_t  _ringPositionStep;

/// @brief Field _spawnAsChildren offset 0x28
 __declspec(property(get=__get__spawnAsChildren, put=__set__spawnAsChildren)) bool  _spawnAsChildren;

/// @brief Field _container offset 0x30
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _rings offset 0x38
 __declspec(property(get=__get__rings, put=__set__rings)) ::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*>  _rings;

 __declspec(property(get=get_ringPositionStep)) float_t  ringPositionStep;

 __declspec(property(get=get_Rings)) ::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*>  Rings;

constexpr void __set__trackLaneRingPrefab(::GlobalNamespace::TrackLaneRing*  value) ;

constexpr ::GlobalNamespace::TrackLaneRing* __get__trackLaneRingPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRing*> __get__trackLaneRingPrefab() const;

constexpr void __set__ringCount(int32_t  value) ;

constexpr int32_t& __get__ringCount() ;

constexpr int32_t const& __get__ringCount() const;

constexpr void __set__ringPositionStep(float_t  value) ;

constexpr float_t& __get__ringPositionStep() ;

constexpr float_t const& __get__ringPositionStep() const;

constexpr void __set__spawnAsChildren(bool  value) ;

constexpr bool& __get__spawnAsChildren() ;

constexpr bool const& __get__spawnAsChildren() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__rings(::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*>& __get__rings() ;

constexpr ::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*> const& __get__rings() const;

/// @brief Method get_ringPositionStep addr 0x23b791c size 0x8 virtual false final false
inline float_t get_ringPositionStep() ;

/// @brief Method get_Rings addr 0x23b7924 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::TrackLaneRing*,::Array<::GlobalNamespace::TrackLaneRing*>*> get_Rings() ;

/// @brief Method Start addr 0x23b792c size 0x2b0 virtual false final false
inline void Start() ;

/// @brief Method FixedUpdate addr 0x23b7bdc size 0x9c virtual false final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x23b7c78 size 0x9c virtual false final false
inline void LateUpdate() ;

/// @brief Method OnDrawGizmosSelected addr 0x23b7d14 size 0x284 virtual false final false
inline void OnDrawGizmosSelected() ;

static inline ::GlobalNamespace::TrackLaneRingsManager* New_ctor() ;

/// @brief Method .ctor addr 0x23b7f98 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackLaneRingsManager(TrackLaneRingsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackLaneRingsManager(TrackLaneRingsManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackLaneRingsManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsManager, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
