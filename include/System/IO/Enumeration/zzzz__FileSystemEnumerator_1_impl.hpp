#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__originalRootDirectory(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__originalRootDirectory()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__originalRootDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__rootDirectory(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__rootDirectory()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__rootDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__options(::System::IO::EnumerationOptions*  value)  {
::cordl_internals::setInstanceField<::System::IO::EnumerationOptions*, 0x20>(this, std::forward<::System::IO::EnumerationOptions*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::IO::EnumerationOptions* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__options()  {
return ::cordl_internals::getInstanceField<::System::IO::EnumerationOptions*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__options() const {
return ::cordl_internals::getInstanceField<::System::IO::EnumerationOptions*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Object* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__currentPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__currentPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__currentPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__directoryHandle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x38>(this, std::forward<::cordl_internals::intptr_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::intptr_t& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__directoryHandle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::intptr_t const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__directoryHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__lastEntryFound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lastEntryFound()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lastEntryFound() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__pending(::System::Collections::Generic::Queue_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::StringW>*, 0x48>(this, std::forward<::System::Collections::Generic::Queue_1<::StringW>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Collections::Generic::Queue_1<::StringW>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pending()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::StringW>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pending() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::StringW>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__entry(::GlobalNamespace::__Interop__Sys__DirectoryEntry  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x50>(this, std::forward<::GlobalNamespace::__Interop__Sys__DirectoryEntry>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entry()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entry() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__current(TResult  value)  {
::cordl_internals::setInstanceField<TResult, 0x60>(this, std::forward<TResult>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr TResult& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__current()  {
return ::cordl_internals::getInstanceField<TResult, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr TResult const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__current() const {
return ::cordl_internals::getInstanceField<TResult, 0x60>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__pathBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x68>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pathBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pathBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x68>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__entryBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entryBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entryBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x70>(this);
}
/// @param options: ::System::IO::EnumerationOptions* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::New_ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(directory, options));
}
/// @param options: ::System::IO::EnumerationOptions* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::_ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, directory, options);
}
/// @param ignoreNotFound: bool (default: false)
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalContinueOnError(::GlobalNamespace::__Interop__ErrorInfo  info, bool  ignoreNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "InternalContinueOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, info, ignoreNotFound);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsDirectoryNotFound(::GlobalNamespace::__Interop__ErrorInfo  info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "IsDirectoryNotFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsAccessError(::GlobalNamespace::__Interop__ErrorInfo  info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "IsAccessError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
/// @param ignoreNotFound: bool (default: false)
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::cordl_internals::intptr_t System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateDirectoryHandle(::StringW  path, bool  ignoreNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "CreateDirectoryHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, path, ignoreNotFound);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CloseDirectoryHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "CloseDirectoryHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "FindNextEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry(::cordl_internals::Ptr<uint8_t>  entryBufferPtr, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "FindNextEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, entryBufferPtr, bufferLength);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DequeueNextDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "DequeueNextDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalDispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "InternalDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "ShouldIncludeEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, entry);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "ShouldRecurseIntoEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, entry);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "TransformEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(*this, ___internal_method, entry);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t>  directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "OnDirectoryFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, directory);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ContinueOnError(int32_t  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "ContinueOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::Object* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DirectoryFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "DirectoryFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
