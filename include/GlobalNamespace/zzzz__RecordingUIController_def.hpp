#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecordingUIController)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __RecordingUIController__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingUIController;
}
namespace GlobalNamespace {
class __RecordingUIController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingUIController);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingUIController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5040))
// CS Name: ::RecordingUIController::InitData*
class CORDL_TYPE __RecordingUIController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field recordingEnabled offset 0x10
 __declspec(property(get=__get_recordingEnabled, put=__set_recordingEnabled)) bool  recordingEnabled;

constexpr void __set_recordingEnabled(bool  value) ;

constexpr bool& __get_recordingEnabled() ;

constexpr bool const& __get_recordingEnabled() const;

static inline ::GlobalNamespace::__RecordingUIController__InitData* New_ctor(bool  recordingEnabled) ;

/// @brief Method .ctor addr 0x23c2334 size 0x28 virtual false final false
inline void _ctor(bool  recordingEnabled) ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingUIController__InitData(__RecordingUIController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingUIController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingUIController__InitData(__RecordingUIController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingUIController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingUIController__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5041))
// CS Name: ::RecordingUIController*
class CORDL_TYPE RecordingUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__RecordingUIController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _circle offset 0x18
 __declspec(property(get=__get__circle, put=__set__circle)) ::UnityEngine::GameObject*  _circle;

/// @brief Field _updateTimeSpan offset 0x20
 __declspec(property(get=__get__updateTimeSpan, put=__set__updateTimeSpan)) float_t  _updateTimeSpan;

/// @brief Field _initData offset 0x28
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__RecordingUIController__InitData*  _initData;

/// @brief Field _lastUpdateTime offset 0x30
 __declspec(property(get=__get__lastUpdateTime, put=__set__lastUpdateTime)) float_t  _lastUpdateTime;

constexpr void __set__circle(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__circle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__circle() const;

constexpr void __set__updateTimeSpan(float_t  value) ;

constexpr float_t& __get__updateTimeSpan() ;

constexpr float_t const& __get__updateTimeSpan() const;

constexpr void __set__initData(::GlobalNamespace::__RecordingUIController__InitData*  value) ;

constexpr ::GlobalNamespace::__RecordingUIController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> __get__initData() const;

constexpr void __set__lastUpdateTime(float_t  value) ;

constexpr float_t& __get__lastUpdateTime() ;

constexpr float_t const& __get__lastUpdateTime() const;

/// @brief Method Init addr 0x23c2238 size 0x80 virtual false final false
inline void Init() ;

/// @brief Method Update addr 0x23c22b8 size 0x6c virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::RecordingUIController* New_ctor() ;

/// @brief Method .ctor addr 0x23c2324 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingUIController(RecordingUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingUIController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingUIController(RecordingUIController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingUIController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingUIController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingUIController*, "", "RecordingUIController");
NEED_NO_BOX(::GlobalNamespace::__RecordingUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingUIController__InitData*, "", "RecordingUIController/InitData");
