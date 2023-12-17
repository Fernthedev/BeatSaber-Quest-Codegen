#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditHistory)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct EditAvatarHistorySnapshot;
}
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class AvatarEditHistory;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory);
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::AvatarEditHistory
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15261))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::AvatarEditHistory*
class CORDL_TYPE AvatarEditHistory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field disableNextSnapshotOverride offset 0x10
 __declspec(property(get=__get_disableNextSnapshotOverride, put=__set_disableNextSnapshotOverride)) bool  disableNextSnapshotOverride;

/// @brief Field _snapShots offset 0x18
 __declspec(property(get=__get__snapShots, put=__set__snapShots)) ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>*  _snapShots;

/// @brief Field _currentDataId offset 0x20
 __declspec(property(get=__get__currentDataId, put=__set__currentDataId)) int32_t  _currentDataId;

 __declspec(property(get=get_undoAvailable)) bool  undoAvailable;

 __declspec(property(get=get_redoAvailable)) bool  redoAvailable;

 __declspec(property(get=get_currentSnapShot)) ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot  currentSnapShot;

 __declspec(property(get=get_lastEditedPart)) ::BeatSaber::BeatAvatarSDK::AvatarPart  lastEditedPart;

constexpr void __set_disableNextSnapshotOverride(bool  value) ;

constexpr bool& __get_disableNextSnapshotOverride() ;

constexpr bool const& __get_disableNextSnapshotOverride() const;

constexpr void __set__snapShots(::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>*  value) ;

constexpr ::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>* __get__snapShots() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>*> __get__snapShots() const;

constexpr void __set__currentDataId(int32_t  value) ;

constexpr int32_t& __get__currentDataId() ;

constexpr int32_t const& __get__currentDataId() const;

/// @brief Method get_undoAvailable addr 0xe14bb0 size 0x10 virtual false final false
inline bool get_undoAvailable() ;

/// @brief Method get_redoAvailable addr 0xe14bc0 size 0x58 virtual false final false
inline bool get_redoAvailable() ;

/// @brief Method get_currentSnapShot addr 0xe14c18 size 0x54 virtual false final false
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot get_currentSnapShot() ;

/// @brief Method get_lastEditedPart addr 0xe14c6c size 0x10 virtual false final false
inline ::BeatSaber::BeatAvatarSDK::AvatarPart get_lastEditedPart() ;

/// @brief Method Clear addr 0xe14c7c size 0x6c virtual false final false
inline void Clear() ;

/// @brief Method Undo addr 0xe14ce8 size 0x1c virtual false final false
inline void Undo() ;

/// @brief Method Redo addr 0xe14d04 size 0x68 virtual false final false
inline void Redo() ;

/// @brief Method UpdateEditHistory addr 0xe14d6c size 0x184 virtual false final false
inline void UpdateEditHistory(::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart) ;

static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* New_ctor() ;

/// @brief Method .ctor addr 0xe14efc size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarEditHistory(AvatarEditHistory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditHistory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarEditHistory(AvatarEditHistory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarEditHistory()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "AvatarEditHistory");
