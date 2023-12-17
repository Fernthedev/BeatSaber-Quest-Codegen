#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredNoteController_1)
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class MirroredNoteController_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class MirroredNoteController_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MirroredNoteController_1);
// Type: ::MirroredNoteController`1
// Type: ::MirroredNoteController`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4756)), TypeDefinitionIndex(TypeDefinitionIndex(4770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4756), inst: 2 })
// CS Name: ::MirroredNoteController`1<T>*
class CORDL_TYPE MirroredNoteController_1<T> : public ::GlobalNamespace::NoteControllerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::NoteControllerBase)]{};

/// @brief Field _noteTransform offset 0x18
 __declspec(property(get=__get__noteTransform, put=__set__noteTransform)) ::UnityEngine::Transform*  _noteTransform;

/// @brief Field followedNote offset 0x20
 __declspec(property(get=__get_followedNote, put=__set_followedNote)) T  followedNote;

/// @brief Field _followedNoteTransform offset 0x28
 __declspec(property(get=__get__followedNoteTransform, put=__set__followedNoteTransform)) ::UnityEngine::Transform*  _followedNoteTransform;

/// @brief Field _didInitEvent offset 0x30
 __declspec(property(get=__get__didInitEvent, put=__set__didInitEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*  _didInitEvent;

/// @brief Field _noteDidPassJumpThreeQuartersEvent offset 0x38
 __declspec(property(get=__get__noteDidPassJumpThreeQuartersEvent, put=__set__noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*  _noteDidPassJumpThreeQuartersEvent;

/// @brief Field _noteDidStartDissolvingEvent offset 0x40
 __declspec(property(get=__get__noteDidStartDissolvingEvent, put=__set__noteDidStartDissolvingEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*  _noteDidStartDissolvingEvent;

 __declspec(property(get=get_didInitEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*  didInitEvent;

 __declspec(property(get=get_noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*  noteDidPassJumpThreeQuartersEvent;

 __declspec(property(get=get_noteDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*  noteDidStartDissolvingEvent;

 __declspec(property(get=get_noteData)) ::GlobalNamespace::NoteData*  noteData;

/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
constexpr operator  ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
constexpr operator  ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept;

constexpr void __set__noteTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__noteTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__noteTransform() const;

constexpr void __set_followedNote(T  value) ;

constexpr T& __get_followedNote() ;

constexpr T const& __get_followedNote() const;

constexpr void __set__followedNoteTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__followedNoteTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__followedNoteTransform() const;

constexpr void __set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* __get__didInitEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*> __get__didInitEvent() const;

constexpr void __set__noteDidPassJumpThreeQuartersEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* __get__noteDidPassJumpThreeQuartersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*> __get__noteDidPassJumpThreeQuartersEvent() const;

constexpr void __set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* __get__noteDidStartDissolvingEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*> __get__noteDidStartDissolvingEvent() const;

/// @brief Method get_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent() ;

/// @brief Method get_noteDidPassJumpThreeQuartersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent() ;

/// @brief Method get_noteDidStartDissolvingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent() ;

/// @brief Method get_noteData addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::NoteData* get_noteData() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method UpdatePositionAndRotation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdatePositionAndRotation() ;

/// @brief Method Mirror addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Mirror(T  noteController) ;

/// @brief Method RemoveListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListeners() ;

/// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x0 size 0xffffffffffffffff virtual true final true
inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase*  noteController, float_t  duration) ;

/// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters addr 0x0 size 0xffffffffffffffff virtual true final true
inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase*  noteController) ;

/// @brief Method Hide addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Hide(bool  hide) ;

static inline ::GlobalNamespace::MirroredNoteController_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirroredNoteController_1(MirroredNoteController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirroredNoteController_1(MirroredNoteController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MirroredNoteController_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MirroredNoteController_1, "", "MirroredNoteController`1");
