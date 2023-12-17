#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatLineManager)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class __BeatLine__Pool;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLineManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatLineManager);
// Type: ::BeatLineManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4701))
// CS Name: ::BeatLineManager*
class CORDL_TYPE BeatLineManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _linesYPosition offset 0x18
 __declspec(property(get=__get__linesYPosition, put=__set__linesYPosition)) float_t  _linesYPosition;

/// @brief Field _beatmapObjectManager offset 0x20
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _beatLinePool offset 0x28
 __declspec(property(get=__get__beatLinePool, put=__set__beatLinePool)) ::GlobalNamespace::__BeatLine__Pool*  _beatLinePool;

/// @brief Field _audioTimeSyncController offset 0x30
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _activeBeatLines offset 0x38
 __declspec(property(get=__get__activeBeatLines, put=__set__activeBeatLines)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4,::GlobalNamespace::BeatLine*>*  _activeBeatLines;

/// @brief Field _removeBeatLineKeyList offset 0x40
 __declspec(property(get=__get__removeBeatLineKeyList, put=__set__removeBeatLineKeyList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  _removeBeatLineKeyList;

/// @brief Field _isMidRotationValid offset 0x48
 __declspec(property(get=__get__isMidRotationValid, put=__set__isMidRotationValid)) bool  _isMidRotationValid;

/// @brief Field _midRotation offset 0x4c
 __declspec(property(get=__get__midRotation, put=__set__midRotation)) float_t  _midRotation;

/// @brief Field _rotationRange offset 0x50
 __declspec(property(get=__get__rotationRange, put=__set__rotationRange)) float_t  _rotationRange;

 __declspec(property(get=get_isMidRotationValid)) bool  isMidRotationValid;

 __declspec(property(get=get_midRotation)) float_t  midRotation;

 __declspec(property(get=get_rotationRange)) float_t  rotationRange;

constexpr void __set__linesYPosition(float_t  value) ;

constexpr float_t& __get__linesYPosition() ;

constexpr float_t const& __get__linesYPosition() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__beatLinePool(::GlobalNamespace::__BeatLine__Pool*  value) ;

constexpr ::GlobalNamespace::__BeatLine__Pool* __get__beatLinePool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatLine__Pool*> __get__beatLinePool() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__activeBeatLines(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4,::GlobalNamespace::BeatLine*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4,::GlobalNamespace::BeatLine*>* __get__activeBeatLines() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4,::GlobalNamespace::BeatLine*>*> __get__activeBeatLines() const;

constexpr void __set__removeBeatLineKeyList(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* __get__removeBeatLineKeyList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> __get__removeBeatLineKeyList() const;

constexpr void __set__isMidRotationValid(bool  value) ;

constexpr bool& __get__isMidRotationValid() ;

constexpr bool const& __get__isMidRotationValid() const;

constexpr void __set__midRotation(float_t  value) ;

constexpr float_t& __get__midRotation() ;

constexpr float_t const& __get__midRotation() const;

constexpr void __set__rotationRange(float_t  value) ;

constexpr float_t& __get__rotationRange() ;

constexpr float_t const& __get__rotationRange() const;

/// @brief Method get_isMidRotationValid addr 0x2376ea8 size 0x8 virtual false final false
inline bool get_isMidRotationValid() ;

/// @brief Method get_midRotation addr 0x2376eb0 size 0x8 virtual false final false
inline float_t get_midRotation() ;

/// @brief Method get_rotationRange addr 0x2376eb8 size 0x8 virtual false final false
inline float_t get_rotationRange() ;

/// @brief Method Start addr 0x2376ec0 size 0x88 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2376ff8 size 0x88 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x2377130 size 0x52c virtual false final false
inline void Update() ;

/// @brief Method HandleNoteWasSpawned addr 0x237765c size 0x1b4 virtual false final false
inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController*  noteController) ;

static inline ::GlobalNamespace::BeatLineManager* New_ctor() ;

/// @brief Method .ctor addr 0x237789c size 0xc8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatLineManager(BeatLineManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatLineManager(BeatLineManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatLineManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLineManager, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatLineManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLineManager*, "", "BeatLineManager");
