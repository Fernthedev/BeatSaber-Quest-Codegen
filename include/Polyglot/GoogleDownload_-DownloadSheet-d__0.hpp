// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.GoogleDownload
#include "Polyglot/GoogleDownload.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.GoogleDownload/Polyglot.<DownloadSheet>d__0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GoogleDownload::$DownloadSheet$d__0 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Func`2<System.Single,System.Boolean> progressbar
    // Size: 0x8
    // Offset: 0x20
    System::Func_2<float, bool>* progressbar;
    // Field size check
    static_assert(sizeof(System::Func_2<float, bool>*) == 0x8);
    // public System.Action`1<System.String> done
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Il2CppString*>* done;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // public System.String docsId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* docsId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String sheetId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* sheetId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Polyglot.GoogleDriveDownloadFormat format
    // Size: 0x4
    // Offset: 0x40
    Polyglot::GoogleDriveDownloadFormat format;
    // Field size check
    static_assert(sizeof(Polyglot::GoogleDriveDownloadFormat) == 0x4);
    // Padding between fields: format and: $url$5__2
    char __padding6[0x4] = {};
    // private System.String <url>5__2
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* $url$5__2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <www>5__3
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Networking::UnityWebRequest* $www$5__3;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: $DownloadSheet$d__0
    $DownloadSheet$d__0(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Func_2<float, bool>* progressbar_ = {}, System::Action_1<::Il2CppString*>* done_ = {}, ::Il2CppString* docsId_ = {}, ::Il2CppString* sheetId_ = {}, Polyglot::GoogleDriveDownloadFormat format_ = {}, ::Il2CppString* $url$5__2_ = {}, UnityEngine::Networking::UnityWebRequest* $www$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, progressbar{progressbar_}, done{done_}, docsId{docsId_}, sheetId{sheetId_}, format{format_}, $url$5__2{$url$5__2_}, $www$5__3{$www$5__3_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Func`2<System.Single,System.Boolean> progressbar
    System::Func_2<float, bool>*& dyn_progressbar();
    // Get instance field reference: public System.Action`1<System.String> done
    System::Action_1<::Il2CppString*>*& dyn_done();
    // Get instance field reference: public System.String docsId
    ::Il2CppString*& dyn_docsId();
    // Get instance field reference: public System.String sheetId
    ::Il2CppString*& dyn_sheetId();
    // Get instance field reference: public Polyglot.GoogleDriveDownloadFormat format
    Polyglot::GoogleDriveDownloadFormat& dyn_format();
    // Get instance field reference: private System.String <url>5__2
    ::Il2CppString*& dyn_$url$5__2();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <www>5__3
    UnityEngine::Networking::UnityWebRequest*& dyn_$www$5__3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x237A880
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x237A8E8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x237A58C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GoogleDownload::$DownloadSheet$d__0* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::GoogleDownload::$DownloadSheet$d__0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GoogleDownload::$DownloadSheet$d__0*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x237A5B8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x237A5BC
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x237A888
    void System_Collections_IEnumerator_Reset();
  }; // Polyglot.GoogleDownload/Polyglot.<DownloadSheet>d__0
  #pragma pack(pop)
  static check_size<sizeof(GoogleDownload::$DownloadSheet$d__0), 80 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __Polyglot_GoogleDownload_$DownloadSheet$d__0SizeCheck;
  static_assert(sizeof(GoogleDownload::$DownloadSheet$d__0) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDownload::$DownloadSheet$d__0*, "Polyglot", "GoogleDownload/<DownloadSheet>d__0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Polyglot::GoogleDownload::$DownloadSheet$d__0::*)()>(&Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload::$DownloadSheet$d__0*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Polyglot::GoogleDownload::$DownloadSheet$d__0::*)()>(&Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload::$DownloadSheet$d__0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::GoogleDownload::$DownloadSheet$d__0::*)()>(&Polyglot::GoogleDownload::$DownloadSheet$d__0::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload::$DownloadSheet$d__0*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::GoogleDownload::$DownloadSheet$d__0::*)()>(&Polyglot::GoogleDownload::$DownloadSheet$d__0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload::$DownloadSheet$d__0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::GoogleDownload::$DownloadSheet$d__0::*)()>(&Polyglot::GoogleDownload::$DownloadSheet$d__0::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::GoogleDownload::$DownloadSheet$d__0*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
