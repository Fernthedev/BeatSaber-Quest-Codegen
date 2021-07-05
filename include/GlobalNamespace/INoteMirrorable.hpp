// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: INoteControllerNoteDidStartDissolvingEvent
  class INoteControllerNoteDidStartDissolvingEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: INoteMirrorable
  class INoteMirrorable {
    public:
    // Creating value type constructor for type: INoteMirrorable
    INoteMirrorable() noexcept {}
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_transform();
    // public UnityEngine.Transform get_noteTransform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_noteTransform();
    // public NoteData get_noteData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteData* get_noteData();
    // public ILazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();
  }; // INoteMirrorable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteMirrorable*, "", "INoteMirrorable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteMirrorable::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::INoteMirrorable::*)()>(&GlobalNamespace::INoteMirrorable::get_transform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteMirrorable*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INoteMirrorable::get_noteTransform
// Il2CppName: get_noteTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::INoteMirrorable::*)()>(&GlobalNamespace::INoteMirrorable::get_noteTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteMirrorable*), "get_noteTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INoteMirrorable::get_noteData
// Il2CppName: get_noteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData* (GlobalNamespace::INoteMirrorable::*)()>(&GlobalNamespace::INoteMirrorable::get_noteData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteMirrorable*), "get_noteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent
// Il2CppName: get_noteDidStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* (GlobalNamespace::INoteMirrorable::*)()>(&GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteMirrorable*), "get_noteDidStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
