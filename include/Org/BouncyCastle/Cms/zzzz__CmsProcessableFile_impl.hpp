#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableFile_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11e5190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*, int32_t)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11e51c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11e51f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11e5284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e5308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr  Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept {
return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr  Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept {
return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableFile::__set__file(::System::IO::FileInfo*  value)  {
::cordl_internals::setInstanceField<::System::IO::FileInfo*, 0x10>(this, std::forward<::System::IO::FileInfo*>(value));
}
constexpr ::System::IO::FileInfo* Org::BouncyCastle::Cms::CmsProcessableFile::__get__file()  {
return ::cordl_internals::getInstanceField<::System::IO::FileInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::FileInfo*> Org::BouncyCastle::Cms::CmsProcessableFile::__get__file() const {
return ::cordl_internals::getInstanceField<::System::IO::FileInfo*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableFile::__set__bufSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsProcessableFile::__get__bufSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsProcessableFile::__get__bufSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo*  file)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file));
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo*  file)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, file);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo*  file, int32_t  bufSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file, bufSize));
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo*  file, int32_t  bufSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, file, bufSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::Write(::System::IO::Stream*  zOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, zOut);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableFile::GetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
