#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeBuffer_def.hpp"
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2500348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::cordl_internals::Ptr<uint8_t>, int64_t, int64_t, ::System::IO::FileAccess)>(&::System::IO::UnmanagedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2507ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::cordl_internals::Ptr<uint8_t>, int64_t, int64_t, ::System::IO::FileAccess)>(&::System::IO::UnmanagedMemoryStream::Initialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x25003ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2507f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2507f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2507f7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(bool)>(&::System::IO::UnmanagedMemoryStream::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2500bd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureNotClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2507f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureReadable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureReadable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2507fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureWriteable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureWriteable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2508008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureWriteable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2508044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::UnmanagedMemoryStream::*)(::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::FlushAsync)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2508048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25081bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_Position)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25081d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(int64_t)>(&::System::IO::UnmanagedMemoryStream::set_Position)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2508220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_PositionPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint8_t> (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_PositionPointer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25082c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_PositionPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::UnmanagedMemoryStream::Read)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2508388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::UnmanagedMemoryStream::Read)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2508548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::UnmanagedMemoryStream::ReadCore)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x25005b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "ReadCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x250862c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::UnmanagedMemoryStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x250893c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::ReadByte)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2508bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::UnmanagedMemoryStream::Seek)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2508d30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(int64_t)>(&::System::IO::UnmanagedMemoryStream::SetLength)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2508e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::UnmanagedMemoryStream::Write)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2508fd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::UnmanagedMemoryStream::Write)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x25091bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::UnmanagedMemoryStream::WriteCore)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x25007e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "WriteCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x25092a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::UnmanagedMemoryStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2509560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(uint8_t)>(&::System::IO::UnmanagedMemoryStream::WriteByte)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2509774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
constexpr void System::IO::UnmanagedMemoryStream::__set__buffer(::System::Runtime::InteropServices::SafeBuffer*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::SafeBuffer*, 0x28>(this, std::forward<::System::Runtime::InteropServices::SafeBuffer*>(value));
}
constexpr ::System::Runtime::InteropServices::SafeBuffer* System::IO::UnmanagedMemoryStream::__get__buffer()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::SafeBuffer*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::InteropServices::SafeBuffer*> System::IO::UnmanagedMemoryStream::__get__buffer() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::SafeBuffer*, 0x28>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__mem(::cordl_internals::Ptr<uint8_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<uint8_t>, 0x30>(this, std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::IO::UnmanagedMemoryStream::__get__mem()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<uint8_t>, 0x30>(this);
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::IO::UnmanagedMemoryStream::__get__mem() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<uint8_t>, 0x30>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__length(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__get__length()  {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__get__length() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__capacity(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__get__capacity()  {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__get__capacity() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__position(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__get__position()  {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this);
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__get__position() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__offset(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__get__offset()  {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__get__offset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__access(::System::IO::FileAccess  value)  {
::cordl_internals::setInstanceField<::System::IO::FileAccess, 0x58>(this, std::forward<::System::IO::FileAccess>(value));
}
constexpr ::System::IO::FileAccess& System::IO::UnmanagedMemoryStream::__get__access()  {
return ::cordl_internals::getInstanceField<::System::IO::FileAccess, 0x58>(this);
}
constexpr ::System::IO::FileAccess const& System::IO::UnmanagedMemoryStream::__get__access() const {
return ::cordl_internals::getInstanceField<::System::IO::FileAccess, 0x58>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__isOpen(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::UnmanagedMemoryStream::__get__isOpen()  {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr bool const& System::IO::UnmanagedMemoryStream::__get__isOpen() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr void System::IO::UnmanagedMemoryStream::__set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x60>(this, std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* System::IO::UnmanagedMemoryStream::__get__lastReadTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> System::IO::UnmanagedMemoryStream::__get__lastReadTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x60>(this);
}
inline ::System::IO::UnmanagedMemoryStream* System::IO::UnmanagedMemoryStream::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::UnmanagedMemoryStream*>());
}
inline void System::IO::UnmanagedMemoryStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IO::UnmanagedMemoryStream* System::IO::UnmanagedMemoryStream::New_ctor(::cordl_internals::Ptr<uint8_t>  pointer, int64_t  length, int64_t  capacity, ::System::IO::FileAccess  access)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::UnmanagedMemoryStream*>(pointer, length, capacity, access));
}
inline void System::IO::UnmanagedMemoryStream::_ctor(::cordl_internals::Ptr<uint8_t>  pointer, int64_t  length, int64_t  capacity, ::System::IO::FileAccess  access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointer, length, capacity, access);
}
inline void System::IO::UnmanagedMemoryStream::Initialize(::cordl_internals::Ptr<uint8_t>  pointer, int64_t  length, int64_t  capacity, ::System::IO::FileAccess  access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointer, length, capacity, access);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::IO::UnmanagedMemoryStream::EnsureNotClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::EnsureReadable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureReadable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::EnsureWriteable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "EnsureWriteable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::UnmanagedMemoryStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline int64_t System::IO::UnmanagedMemoryStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline int64_t System::IO::UnmanagedMemoryStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::set_Position(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::cordl_internals::Ptr<uint8_t> System::IO::UnmanagedMemoryStream::get_PositionPointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "get_PositionPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(*this, ___internal_method);
}
inline int32_t System::IO::UnmanagedMemoryStream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer, offset, count);
}
inline int32_t System::IO::UnmanagedMemoryStream::Read(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer);
}
inline int32_t System::IO::UnmanagedMemoryStream::ReadCore(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "ReadCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::UnmanagedMemoryStream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(*this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::UnmanagedMemoryStream::ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(*this, ___internal_method, buffer, cancellationToken);
}
inline int32_t System::IO::UnmanagedMemoryStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int64_t System::IO::UnmanagedMemoryStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  loc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, offset, loc);
}
inline void System::IO::UnmanagedMemoryStream::SetLength(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::IO::UnmanagedMemoryStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, offset, count);
}
inline void System::IO::UnmanagedMemoryStream::Write(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline void System::IO::UnmanagedMemoryStream::WriteCore(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "WriteCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* System::IO::UnmanagedMemoryStream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask System::IO::UnmanagedMemoryStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(*this, ___internal_method, buffer, cancellationToken);
}
inline void System::IO::UnmanagedMemoryStream::WriteByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
