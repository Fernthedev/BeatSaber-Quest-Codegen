// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CaptureAudioToWav
  // [TokenAttribute] Offset: FFFFFFFF
  class CaptureAudioToWav : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _fileName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* fileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _sampleRate
    // Size: 0x4
    // Offset: 0x20
    int sampleRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _headerSize
    // Size: 0x4
    // Offset: 0x24
    int headerSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _recording
    // Size: 0x1
    // Offset: 0x28
    bool recording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recording and: fileStream
    char __padding3[0x7] = {};
    // private System.IO.FileStream _fileStream
    // Size: 0x8
    // Offset: 0x30
    System::IO::FileStream* fileStream;
    // Field size check
    static_assert(sizeof(System::IO::FileStream*) == 0x8);
    // Creating value type constructor for type: CaptureAudioToWav
    CaptureAudioToWav(::Il2CppString* fileName_ = {}, int sampleRate_ = {}, int headerSize_ = {}, bool recording_ = {}, System::IO::FileStream* fileStream_ = {}) noexcept : fileName{fileName_}, sampleRate{sampleRate_}, headerSize{headerSize_}, recording{recording_}, fileStream{fileStream_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _fileName
    ::Il2CppString*& dyn__fileName();
    // Get instance field reference: private System.Int32 _sampleRate
    int& dyn__sampleRate();
    // Get instance field reference: private System.Int32 _headerSize
    int& dyn__headerSize();
    // Get instance field reference: private System.Boolean _recording
    bool& dyn__recording();
    // Get instance field reference: private System.IO.FileStream _fileStream
    System::IO::FileStream*& dyn__fileStream();
    // protected System.Void Awake()
    // Offset: 0x125C838
    void Awake();
    // protected System.Void Update()
    // Offset: 0x125C870
    void Update();
    // private System.Void StartWriting(System.String name)
    // Offset: 0x125C920
    void StartWriting(::Il2CppString* name);
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x125CDC0
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // private System.Void ConvertAndWrite(System.Single[] dataSource)
    // Offset: 0x125CDD0
    void ConvertAndWrite(::Array<float>* dataSource);
    // private System.Void WriteHeader()
    // Offset: 0x125C9DC
    void WriteHeader();
    // public System.Void .ctor()
    // Offset: 0x125CF8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaptureAudioToWav* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CaptureAudioToWav::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaptureAudioToWav*, creationType>()));
    }
  }; // CaptureAudioToWav
  #pragma pack(pop)
  static check_size<sizeof(CaptureAudioToWav), 48 + sizeof(System::IO::FileStream*)> __GlobalNamespace_CaptureAudioToWavSizeCheck;
  static_assert(sizeof(CaptureAudioToWav) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CaptureAudioToWav*, "", "CaptureAudioToWav");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::StartWriting
// Il2CppName: StartWriting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::Il2CppString*)>(&GlobalNamespace::CaptureAudioToWav::StartWriting)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "StartWriting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::Array<float>*, int)>(&GlobalNamespace::CaptureAudioToWav::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::ConvertAndWrite
// Il2CppName: ConvertAndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)(::Array<float>*)>(&GlobalNamespace::CaptureAudioToWav::ConvertAndWrite)> {
  static const MethodInfo* get() {
    static auto* dataSource = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "ConvertAndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::WriteHeader
// Il2CppName: WriteHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CaptureAudioToWav::*)()>(&GlobalNamespace::CaptureAudioToWav::WriteHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CaptureAudioToWav*), "WriteHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CaptureAudioToWav::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
