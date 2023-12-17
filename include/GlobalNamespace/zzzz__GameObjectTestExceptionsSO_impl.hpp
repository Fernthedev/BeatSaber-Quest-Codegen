#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectTestExceptionsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectTestExceptionsSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException.get_sceneHierarchies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            "get_sceneHierarchies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::*)()>(&::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x10>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__exceptionNotes(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__exceptionNotes()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__exceptionNotes() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__set__sceneHierarchies(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__sceneHierarchies()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::__get__sceneHierarchies() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(*this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::get_sceneHierarchies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            "get_sceneHierarchies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException* GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>());
}
inline void GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::GameObjectTestExceptionsSO.GetExceptionAsDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*,::ArrayW<::StringW,::Array<::StringW>*>>* (*)(::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>)>(&::GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23237c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(),
                            "GetExceptionAsDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectTestExceptionsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectTestExceptionsSO::*)()>(&::GlobalNamespace::GameObjectTestExceptionsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23238a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameObjectTestExceptionsSO::__set_tubeBloomPrePassLightIgnores(::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>& GlobalNamespace::GameObjectTestExceptionsSO::__get_tubeBloomPrePassLightIgnores()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> const& GlobalNamespace::GameObjectTestExceptionsSO::__get_tubeBloomPrePassLightIgnores() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>, 0x18>(this);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*,::ArrayW<::StringW,::Array<::StringW>*>>* GlobalNamespace::GameObjectTestExceptionsSO::GetExceptionAsDictionary(::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>  testExceptionArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(),
                            "GetExceptionAsDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*,::ArrayW<::StringW,::Array<::StringW>*>>*, false>(nullptr, ___internal_method, testExceptionArray);
}
inline ::GlobalNamespace::GameObjectTestExceptionsSO* GlobalNamespace::GameObjectTestExceptionsSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameObjectTestExceptionsSO*>());
}
inline void GlobalNamespace::GameObjectTestExceptionsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectTestExceptionsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
