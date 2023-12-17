#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerEnvironmentResizeController)
namespace GlobalNamespace {
class __MultiplayerEnvironmentResizeController__ResizeData;
}
namespace GlobalNamespace {
struct __MultiplayerEnvironmentResizeController__ResizeType;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerEnvironmentResizeController__ResizeType;
}
namespace GlobalNamespace {
class MultiplayerEnvironmentResizeController;
}
namespace GlobalNamespace {
class __MultiplayerEnvironmentResizeController__ResizeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentResizeController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData);
// Type: ::ResizeType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5204))
// CS Name: ::MultiplayerEnvironmentResizeController::ResizeType
struct CORDL_TYPE __MultiplayerEnvironmentResizeController__ResizeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped
enum struct ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Position = static_cast<int32_t>(0x1),
__E_Length = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const None;

/// @brief Field Position value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const Position;

/// @brief Field Length value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const Length;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped () const noexcept {
return std::bit_cast<____MultiplayerEnvironmentResizeController__ResizeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MultiplayerEnvironmentResizeController__ResizeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerEnvironmentResizeController__ResizeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerEnvironmentResizeController__ResizeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ResizeData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5205))
// CS Name: ::MultiplayerEnvironmentResizeController::ResizeData*
class CORDL_TYPE __MultiplayerEnvironmentResizeController__ResizeData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _resizeType offset 0x10
 __declspec(property(get=__get__resizeType, put=__set__resizeType)) ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  _resizeType;

/// @brief Field _offset offset 0x14
 __declspec(property(get=__get__offset, put=__set__offset)) float_t  _offset;

/// @brief Field _lights offset 0x18
 __declspec(property(get=__get__lights, put=__set__lights)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  _lights;

/// @brief Field _otherTransforms offset 0x20
 __declspec(property(get=__get__otherTransforms, put=__set__otherTransforms)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  _otherTransforms;

 __declspec(property(get=get_resizeType)) ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  resizeType;

 __declspec(property(get=get_offset)) float_t  offset;

 __declspec(property(get=get_lights)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  lights;

 __declspec(property(get=get_otherTransforms)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  otherTransforms;

constexpr void __set__resizeType(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  value) ;

constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType& __get__resizeType() ;

constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const& __get__resizeType() const;

constexpr void __set__offset(float_t  value) ;

constexpr float_t& __get__offset() ;

constexpr float_t const& __get__offset() const;

constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__lights() ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__lights() const;

constexpr void __set__otherTransforms(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get__otherTransforms() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get__otherTransforms() const;

/// @brief Method get_resizeType addr 0x224c89c size 0x8 virtual false final false
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType get_resizeType() ;

/// @brief Method get_offset addr 0x224c8a4 size 0x8 virtual false final false
inline float_t get_offset() ;

/// @brief Method get_lights addr 0x224c8ac size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> get_lights() ;

/// @brief Method get_otherTransforms addr 0x224c8b4 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> get_otherTransforms() ;

static inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData* New_ctor() ;

/// @brief Method .ctor addr 0x224c8bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerEnvironmentResizeController__ResizeData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerEnvironmentResizeController__ResizeData(__MultiplayerEnvironmentResizeController__ResizeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerEnvironmentResizeController__ResizeData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerEnvironmentResizeController__ResizeData(__MultiplayerEnvironmentResizeController__ResizeData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerEnvironmentResizeController__ResizeData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerEnvironmentResizeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5206))
// CS Name: ::MultiplayerEnvironmentResizeController*
class CORDL_TYPE MultiplayerEnvironmentResizeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ResizeData = ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData;

using ResizeType = ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _platformEnd offset 0x18
 __declspec(property(get=__get__platformEnd, put=__set__platformEnd)) ::UnityEngine::Transform*  _platformEnd;

/// @brief Field _resizeData offset 0x20
 __declspec(property(get=__get__resizeData, put=__set__resizeData)) ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>  _resizeData;

/// @brief Field _centerResizeController offset 0x28
 __declspec(property(get=__get__centerResizeController, put=__set__centerResizeController)) ::GlobalNamespace::MultiplayerCenterResizeController*  _centerResizeController;

/// @brief Field _beatmapObjectSpawnCenter offset 0x30
 __declspec(property(get=__get__beatmapObjectSpawnCenter, put=__set__beatmapObjectSpawnCenter)) ::GlobalNamespace::BeatmapObjectSpawnCenter*  _beatmapObjectSpawnCenter;

/// @brief Field resizingDidFinishEvent offset 0x38
 __declspec(property(get=__get_resizingDidFinishEvent, put=__set_resizingDidFinishEvent)) ::System::Action*  resizingDidFinishEvent;

/// @brief Field _isResizingFinished offset 0x40
 __declspec(property(get=__get__isResizingFinished, put=__set__isResizingFinished)) bool  _isResizingFinished;

/// @brief Field _edgeDistanceFromCenterFound offset 0x41
 __declspec(property(get=__get__edgeDistanceFromCenterFound, put=__set__edgeDistanceFromCenterFound)) bool  _edgeDistanceFromCenterFound;

/// @brief Field _spawnCenterDistanceFound offset 0x42
 __declspec(property(get=__get__spawnCenterDistanceFound, put=__set__spawnCenterDistanceFound)) bool  _spawnCenterDistanceFound;

 __declspec(property(get=get_isResizingFinished)) bool  isResizingFinished;

constexpr void __set__platformEnd(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__platformEnd() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__platformEnd() const;

constexpr void __set__resizeData(::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>& __get__resizeData() ;

constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> const& __get__resizeData() const;

constexpr void __set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController*  value) ;

constexpr ::GlobalNamespace::MultiplayerCenterResizeController* __get__centerResizeController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerCenterResizeController*> __get__centerResizeController() const;

constexpr void __set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter* __get__beatmapObjectSpawnCenter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> __get__beatmapObjectSpawnCenter() const;

constexpr void __set_resizingDidFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_resizingDidFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_resizingDidFinishEvent() const;

constexpr void __set__isResizingFinished(bool  value) ;

constexpr bool& __get__isResizingFinished() ;

constexpr bool const& __get__isResizingFinished() const;

constexpr void __set__edgeDistanceFromCenterFound(bool  value) ;

constexpr bool& __get__edgeDistanceFromCenterFound() ;

constexpr bool const& __get__edgeDistanceFromCenterFound() const;

constexpr void __set__spawnCenterDistanceFound(bool  value) ;

constexpr bool& __get__spawnCenterDistanceFound() ;

constexpr bool const& __get__spawnCenterDistanceFound() const;

/// @brief Method get_isResizingFinished addr 0x224c298 size 0x8 virtual false final false
inline bool get_isResizingFinished() ;

/// @brief Method add_resizingDidFinishEvent addr 0x224c2a0 size 0x9c virtual false final false
inline void add_resizingDidFinishEvent(::System::Action*  value) ;

/// @brief Method remove_resizingDidFinishEvent addr 0x224c33c size 0x9c virtual false final false
inline void remove_resizingDidFinishEvent(::System::Action*  value) ;

/// @brief Method Start addr 0x224c3d8 size 0x13c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x224c544 size 0x150 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleEdgeDistanceFromCenterWasCalculated addr 0x224c514 size 0x18 virtual false final false
inline void HandleEdgeDistanceFromCenterWasCalculated(float_t  edgeDistanceFromCenter) ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x224c52c size 0x18 virtual false final false
inline void HandleSpawnCenterDistanceWasFound(float_t  distance) ;

/// @brief Method TryResize addr 0x224c694 size 0x18 virtual false final false
inline void TryResize() ;

/// @brief Method Resize addr 0x224c6ac size 0x1e8 virtual false final false
inline void Resize() ;

static inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* New_ctor() ;

/// @brief Method .ctor addr 0x224c894 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentResizeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerEnvironmentResizeController(MultiplayerEnvironmentResizeController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerEnvironmentResizeController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentResizeController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, "", "MultiplayerEnvironmentResizeController/ResizeType");
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*, "", "MultiplayerEnvironmentResizeController/ResizeData");
