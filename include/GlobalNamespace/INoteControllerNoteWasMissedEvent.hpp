// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteWasMissedEvent
  class INoteControllerNoteWasMissedEvent {
    public:
    // Creating value type constructor for type: INoteControllerNoteWasMissedEvent
    INoteControllerNoteWasMissedEvent() noexcept {}
    // public System.Void HandleNoteControllerNoteWasMissed(NoteController noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteWasMissed(GlobalNamespace::NoteController* noteController);
  }; // INoteControllerNoteWasMissedEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerNoteWasMissedEvent*, "", "INoteControllerNoteWasMissedEvent");
// Writing includes for template specializations
#include "GlobalNamespace/NoteController.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed
// Il2CppName: HandleNoteControllerNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteWasMissedEvent::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::INoteControllerNoteWasMissedEvent::HandleNoteControllerNoteWasMissed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteWasMissedEvent*), "HandleNoteControllerNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteController*>()});
  }
};
