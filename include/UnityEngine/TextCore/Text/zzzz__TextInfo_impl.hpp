#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__PageInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d47fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d480dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearMeshInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)(bool)>(&::UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d48138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "ClearMeshInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextInfo.ClearLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextInfo::*)()>(&::UnityEngine::TextCore::Text::TextInfo::ClearLineInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2d481e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "ClearLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorPositive(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorPositive()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>();
}
inline void UnityEngine::TextCore::Text::TextInfo::setStaticF_s_InfinityVectorNegative(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::getStaticF_s_InfinityVectorNegative()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get>();
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_characterCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_characterCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spriteCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_spriteCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_spriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spaceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_spaceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_spaceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_wordCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_wordCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_linkCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_linkCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_lineCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_lineCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_pageCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_pageCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_materialCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextInfo::__get_materialCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextInfo::__get_materialCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_textElementInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_textElementInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo,::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>, 0x30>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_wordInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_wordInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::WordInfo,::Array<::UnityEngine::TextCore::Text::WordInfo>*>, 0x38>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_linkInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_linkInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LinkInfo,::Array<::UnityEngine::TextCore::Text::LinkInfo>*>, 0x40>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_lineInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_lineInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::LineInfo,::Array<::UnityEngine::TextCore::Text::LineInfo>*>, 0x48>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageInfo(::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>, 0x50>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_pageInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>, 0x50>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_pageInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::PageInfo,::Array<::UnityEngine::TextCore::Text::PageInfo>*>, 0x50>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>, 0x58>(this, std::forward<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>& UnityEngine::TextCore::Text::TextInfo::__get_meshInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>, 0x58>(this);
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*> const& UnityEngine::TextCore::Text::TextInfo::__get_meshInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MeshInfo,::Array<::UnityEngine::TextCore::Text::MeshInfo>*>, 0x58>(this);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_isDirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextInfo::__get_isDirty()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextInfo::__get_isDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextInfo*>());
}
inline void UnityEngine::TextCore::Text::TextInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo(bool  updateMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "ClearMeshInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, updateMesh);
}
inline void UnityEngine::TextCore::Text::TextInfo::ClearLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                            "ClearLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T,::Array<T>*>>  array, int32_t  size)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                        "Resize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T,::Array<T>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size);
}
template<typename T>
inline void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T,::Array<T>*>>  array, int32_t  size, bool  isBlockAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextInfo*>::get(),
                        "Resize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T,::Array<T>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size, isBlockAllocated);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
