#pragma once
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
constexpr void System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer::__set_FixedElementField(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<char16_t>(value));
}
constexpr char16_t& System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer::__get_FixedElementField()  {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr char16_t const& System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer::__FileSystemEntry____fileNameBuffer_e__FixedBuffer(char16_t  FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper<0x200>() {this->FixedElementField = FixedElementField;
}
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (*)(ByRef<::System::IO::Enumeration::FileSystemEntry>, ::GlobalNamespace::__Interop__Sys__DirectoryEntry, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::Initialize)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x25460e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Sys__DirectoryEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FullPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_FullPath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2546364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_FullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_FileName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2546494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_FileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_Directory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2546528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_Directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_Directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_Directory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2546538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_Directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_RootDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_RootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2546544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_RootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_RootDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_RootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2546554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_RootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_OriginalRootDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2546560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_OriginalRootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_OriginalRootDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2546570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_OriginalRootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_Attributes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x254657c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_IsDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25465c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_IsDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToFileSystemInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileSystemInfo* (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25465cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToFileSystemInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToFullPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToFullPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x254663c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToSpecifiedFullPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2546664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToSpecifiedFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::IO::Enumeration::FileSystemEntry::__set__directoryEntry(::GlobalNamespace::__Interop__Sys__DirectoryEntry  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__Interop__Sys__DirectoryEntry>(value));
}
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry& System::IO::Enumeration::FileSystemEntry::__get__directoryEntry()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry const& System::IO::Enumeration::FileSystemEntry::__get__directoryEntry() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__Interop__Sys__DirectoryEntry, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__status(::System::IO::FileStatus  value)  {
::cordl_internals::setInstanceField<::System::IO::FileStatus, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::FileStatus>(value));
}
constexpr ::System::IO::FileStatus& System::IO::Enumeration::FileSystemEntry::__get__status()  {
return ::cordl_internals::getInstanceField<::System::IO::FileStatus, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::IO::FileStatus const& System::IO::Enumeration::FileSystemEntry::__get__status() const {
return ::cordl_internals::getInstanceField<::System::IO::FileStatus, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__pathBuffer(::System::Span_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::Span_1<char16_t>, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Span_1<char16_t>>(value));
}
constexpr ::System::Span_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__pathBuffer()  {
return ::cordl_internals::getInstanceField<::System::Span_1<char16_t>, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Span_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__pathBuffer() const {
return ::cordl_internals::getInstanceField<::System::Span_1<char16_t>, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__fullPath(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__fullPath()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__fullPath() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__fileName(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__fileName()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__fileName() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__fileNameBuffer(::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer  value)  {
::cordl_internals::setInstanceField<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer>(value));
}
constexpr ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer& System::IO::Enumeration::FileSystemEntry::__get__fileNameBuffer()  {
return ::cordl_internals::getInstanceField<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer const& System::IO::Enumeration::FileSystemEntry::__get__fileNameBuffer() const {
return ::cordl_internals::getInstanceField<::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__initialAttributes(::System::IO::FileAttributes  value)  {
::cordl_internals::setInstanceField<::System::IO::FileAttributes, 0x2b8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::FileAttributes>(value));
}
constexpr ::System::IO::FileAttributes& System::IO::Enumeration::FileSystemEntry::__get__initialAttributes()  {
return ::cordl_internals::getInstanceField<::System::IO::FileAttributes, 0x2b8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::IO::FileAttributes const& System::IO::Enumeration::FileSystemEntry::__get__initialAttributes() const {
return ::cordl_internals::getInstanceField<::System::IO::FileAttributes, 0x2b8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__Directory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2c0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__Directory_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2c0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__Directory_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2c0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__RootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2d0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__RootDirectory_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2d0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__RootDirectory_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2d0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::Enumeration::FileSystemEntry::__set__OriginalRootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2e0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::IO::Enumeration::FileSystemEntry::__get__OriginalRootDirectory_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2e0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::IO::Enumeration::FileSystemEntry::__get__OriginalRootDirectory_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x2e0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::Initialize(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry, ::GlobalNamespace::__Interop__Sys__DirectoryEntry  directoryEntry, ::System::ReadOnlySpan_1<char16_t>  directory, ::System::ReadOnlySpan_1<char16_t>  rootDirectory, ::System::ReadOnlySpan_1<char16_t>  originalRootDirectory, ::System::Span_1<char16_t>  pathBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Sys__DirectoryEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(nullptr, ___internal_method, entry, directoryEntry, directory, rootDirectory, originalRootDirectory, pathBuffer);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FullPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_FullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_FileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_Directory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_Directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_Directory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_Directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_RootDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_RootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_RootDirectory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_RootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_OriginalRootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "set_OriginalRootDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes, false>(*this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEntry::get_IsDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "get_IsDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToFileSystemInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*, false>(*this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToFullPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEntry>::get(),
                            "ToSpecifiedFullPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::__Interop__Sys__DirectoryEntry", modifiers: "", def_value: Some("{}") }, CppParam { name: "_status", ty: "::System::IO::FileStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullPath", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileNameBuffer", ty: "::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_initialAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Enumeration::FileSystemEntry::FileSystemEntry(::GlobalNamespace::__Interop__Sys__DirectoryEntry  _directoryEntry, ::System::IO::FileStatus  _status, ::System::Span_1<char16_t>  _pathBuffer, ::System::ReadOnlySpan_1<char16_t>  _fullPath, ::System::ReadOnlySpan_1<char16_t>  _fileName, ::System::IO::Enumeration::__FileSystemEntry____fileNameBuffer_e__FixedBuffer  _fileNameBuffer, ::System::IO::FileAttributes  _initialAttributes, ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper<0x2f0>() {this->_directoryEntry = _directoryEntry;
this->_status = _status;
this->_pathBuffer = _pathBuffer;
this->_fullPath = _fullPath;
this->_fileName = _fileName;
this->_fileNameBuffer = _fileNameBuffer;
this->_initialAttributes = _initialAttributes;
this->_Directory_k__BackingField = _Directory_k__BackingField;
this->_RootDirectory_k__BackingField = _RootDirectory_k__BackingField;
this->_OriginalRootDirectory_k__BackingField = _OriginalRootDirectory_k__BackingField;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
