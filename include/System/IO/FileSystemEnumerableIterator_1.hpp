// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Iterator`1
#include "System/IO/Iterator_1.hpp"
// Including type: System.IO.Directory
#include "System/IO/Directory.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResultHandler`1<TSource>
  template<typename TSource>
  class SearchResultHandler_1;
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeFindHandle
  class SafeFindHandle;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.FileSystemEnumerableIterator`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class FileSystemEnumerableIterator_1 : public System::IO::Iterator_1<TSource> {
    public:
    // private System.IO.SearchResultHandler`1<TSource> _resultHandler
    // Size: 0x8
    // Offset: 0x0
    System::IO::SearchResultHandler_1<TSource>* resultHandler;
    // Field size check
    static_assert(sizeof(System::IO::SearchResultHandler_1<TSource>*) == 0x8);
    // private System.Collections.Generic.List`1<System.IO.Directory/System.IO.SearchData> searchStack
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<System::IO::Directory::SearchData*>* searchStack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::IO::Directory::SearchData*>*) == 0x8);
    // private System.IO.Directory/System.IO.SearchData searchData
    // Size: 0x8
    // Offset: 0x0
    System::IO::Directory::SearchData* searchData;
    // Field size check
    static_assert(sizeof(System::IO::Directory::SearchData*) == 0x8);
    // private System.String searchCriteria
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* searchCriteria;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Microsoft.Win32.SafeHandles.SafeFindHandle _hnd
    // Size: 0x8
    // Offset: 0x0
    Microsoft::Win32::SafeHandles::SafeFindHandle* hnd;
    // Field size check
    static_assert(sizeof(Microsoft::Win32::SafeHandles::SafeFindHandle*) == 0x8);
    // private System.Boolean needsParentPathDiscoveryDemand
    // Size: 0x1
    // Offset: 0x0
    bool needsParentPathDiscoveryDemand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean empty
    // Size: 0x1
    // Offset: 0x0
    bool empty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.String userPath
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* userPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IO.SearchOption searchOption
    // Size: 0x4
    // Offset: 0x0
    System::IO::SearchOption searchOption;
    // Field size check
    static_assert(sizeof(System::IO::SearchOption) == 0x4);
    // private System.String fullPath
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* fullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String normalizedSearchPath
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* normalizedSearchPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _checkHost
    // Size: 0x1
    // Offset: 0x0
    bool checkHost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FileSystemEnumerableIterator_1
    FileSystemEnumerableIterator_1(System::IO::SearchResultHandler_1<TSource>* resultHandler_ = {}, System::Collections::Generic::List_1<System::IO::Directory::SearchData*>* searchStack_ = {}, System::IO::Directory::SearchData* searchData_ = {}, ::Il2CppString* searchCriteria_ = {}, Microsoft::Win32::SafeHandles::SafeFindHandle* hnd_ = {}, bool needsParentPathDiscoveryDemand_ = {}, bool empty_ = {}, ::Il2CppString* userPath_ = {}, System::IO::SearchOption searchOption_ = {}, ::Il2CppString* fullPath_ = {}, ::Il2CppString* normalizedSearchPath_ = {}, bool checkHost_ = {}) noexcept : resultHandler{resultHandler_}, searchStack{searchStack_}, searchData{searchData_}, searchCriteria{searchCriteria_}, hnd{hnd_}, needsParentPathDiscoveryDemand{needsParentPathDiscoveryDemand_}, empty{empty_}, userPath{userPath_}, searchOption{searchOption_}, fullPath{fullPath_}, normalizedSearchPath{normalizedSearchPath_}, checkHost{checkHost_} {}
    // Autogenerated instance field getter
    // Get instance field: private System.IO.SearchResultHandler`1<TSource> _resultHandler
    System::IO::SearchResultHandler_1<TSource>*& dyn__resultHandler() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn__resultHandler");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_resultHandler"))->offset;
      return *reinterpret_cast<System::IO::SearchResultHandler_1<TSource>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<System.IO.Directory/System.IO.SearchData> searchStack
    System::Collections::Generic::List_1<System::IO::Directory::SearchData*>*& dyn_searchStack() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_searchStack");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "searchStack"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<System::IO::Directory::SearchData*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.IO.Directory/System.IO.SearchData searchData
    System::IO::Directory::SearchData*& dyn_searchData() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_searchData");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "searchData"))->offset;
      return *reinterpret_cast<System::IO::Directory::SearchData**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String searchCriteria
    ::Il2CppString*& dyn_searchCriteria() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_searchCriteria");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "searchCriteria"))->offset;
      return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Microsoft.Win32.SafeHandles.SafeFindHandle _hnd
    Microsoft::Win32::SafeHandles::SafeFindHandle*& dyn__hnd() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn__hnd");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_hnd"))->offset;
      return *reinterpret_cast<Microsoft::Win32::SafeHandles::SafeFindHandle**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean needsParentPathDiscoveryDemand
    bool& dyn_needsParentPathDiscoveryDemand() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_needsParentPathDiscoveryDemand");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "needsParentPathDiscoveryDemand"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean empty
    bool& dyn_empty() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_empty");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "empty"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String userPath
    ::Il2CppString*& dyn_userPath() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_userPath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "userPath"))->offset;
      return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.IO.SearchOption searchOption
    System::IO::SearchOption& dyn_searchOption() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_searchOption");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "searchOption"))->offset;
      return *reinterpret_cast<System::IO::SearchOption*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String fullPath
    ::Il2CppString*& dyn_fullPath() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_fullPath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "fullPath"))->offset;
      return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String normalizedSearchPath
    ::Il2CppString*& dyn_normalizedSearchPath() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn_normalizedSearchPath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "normalizedSearchPath"))->offset;
      return *reinterpret_cast<::Il2CppString**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _checkHost
    bool& dyn__checkHost() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::dyn__checkHost");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_checkHost"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.String path, System.String originalUserPath, System.String searchPattern, System.IO.SearchOption searchOption, System.IO.SearchResultHandler`1<TSource> resultHandler, System.Boolean checkHost)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEnumerableIterator_1<TSource>* New_ctor(::Il2CppString* path, ::Il2CppString* originalUserPath, ::Il2CppString* searchPattern, System::IO::SearchOption searchOption, System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEnumerableIterator_1<TSource>*, creationType>(path, originalUserPath, searchPattern, searchOption, resultHandler, checkHost)));
    }
    // private System.Void .ctor(System.String fullPath, System.String normalizedSearchPath, System.String searchCriteria, System.String userPath, System.IO.SearchOption searchOption, System.IO.SearchResultHandler`1<TSource> resultHandler, System.Boolean checkHost)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEnumerableIterator_1<TSource>* New_ctor(::Il2CppString* fullPath, ::Il2CppString* normalizedSearchPath, ::Il2CppString* searchCriteria, ::Il2CppString* userPath, System::IO::SearchOption searchOption, System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEnumerableIterator_1<TSource>*, creationType>(fullPath, normalizedSearchPath, searchCriteria, userPath, searchOption, resultHandler, checkHost)));
    }
    // private System.Void CommonInit()
    // Offset: 0xFFFFFFFF
    void CommonInit() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::CommonInit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CommonInit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.IO.SearchResult CreateSearchResult(System.IO.Directory/System.IO.SearchData localSearchData, Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA findData)
    // Offset: 0xFFFFFFFF
    System::IO::SearchResult* CreateSearchResult(System::IO::Directory::SearchData* localSearchData, Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::CreateSearchResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSearchResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(localSearchData), ::il2cpp_utils::ExtractType(findData)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::IO::SearchResult*, false>(___instance_arg, ___internal__method, localSearchData, findData);
    }
    // private System.Void HandleError(System.Int32 hr, System.String path)
    // Offset: 0xFFFFFFFF
    void HandleError(int hr, ::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::HandleError");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleError", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hr), ::il2cpp_utils::ExtractType(path)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, hr, path);
    }
    // private System.Void AddSearchableDirsToStack(System.IO.Directory/System.IO.SearchData localSearchData)
    // Offset: 0xFFFFFFFF
    void AddSearchableDirsToStack(System::IO::Directory::SearchData* localSearchData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::AddSearchableDirsToStack");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddSearchableDirsToStack", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(localSearchData)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, localSearchData);
    }
    // System.Void DoDemand(System.String fullPathToDemand)
    // Offset: 0xFFFFFFFF
    void DoDemand(::Il2CppString* fullPathToDemand) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::DoDemand");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DoDemand", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fullPathToDemand)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, fullPathToDemand);
    }
    // static private System.String NormalizeSearchPattern(System.String searchPattern)
    // Offset: 0xFFFFFFFF
    static ::Il2CppString* NormalizeSearchPattern(::Il2CppString* searchPattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::NormalizeSearchPattern");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "NormalizeSearchPattern", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(searchPattern)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, searchPattern);
    }
    // static private System.String GetNormalizedSearchCriteria(System.String fullSearchString, System.String fullPathMod)
    // Offset: 0xFFFFFFFF
    static ::Il2CppString* GetNormalizedSearchCriteria(::Il2CppString* fullSearchString, ::Il2CppString* fullPathMod) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::GetNormalizedSearchCriteria");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "GetNormalizedSearchCriteria", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fullSearchString), ::il2cpp_utils::ExtractType(fullPathMod)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, fullSearchString, fullPathMod);
    }
    // static private System.String GetFullSearchString(System.String fullPath, System.String searchPattern)
    // Offset: 0xFFFFFFFF
    static ::Il2CppString* GetFullSearchString(::Il2CppString* fullPath, ::Il2CppString* searchPattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::GetFullSearchString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "GetFullSearchString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fullPath), ::il2cpp_utils::ExtractType(searchPattern)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, fullPath, searchPattern);
    }
    // protected override System.IO.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.IO.Iterator`1<TSource> Iterator_1::Clone()
    System::IO::Iterator_1<TSource>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::Clone");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::IO::Iterator_1<TSource>*, false>(___instance_arg, ___internal__method);
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.Void Iterator_1::Dispose(System.Boolean disposing)
    void Dispose(bool disposing) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::Dispose");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(disposing)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, disposing);
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEnumerableIterator_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
  }; // System.IO.FileSystemEnumerableIterator`1
  // Could not write size check! Type: System.IO.FileSystemEnumerableIterator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::FileSystemEnumerableIterator_1, "System.IO", "FileSystemEnumerableIterator`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
