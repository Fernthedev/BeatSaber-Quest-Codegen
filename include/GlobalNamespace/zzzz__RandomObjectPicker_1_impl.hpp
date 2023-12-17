#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__objects(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& GlobalNamespace::RandomObjectPicker_1<T>::__get__objects()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& GlobalNamespace::RandomObjectPicker_1<T>::__get__objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__lastPickTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__get__lastPickTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__get__lastPickTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__set__minimumPickInterval(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__get__minimumPickInterval()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__get__minimumPickInterval() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(T  obj, float_t  minimumPickInterval)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomObjectPicker_1<T>*>(obj, minimumPickInterval));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(T  obj, float_t  minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, minimumPickInterval);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(::ArrayW<T,::Array<T>*>  objects, float_t  minimumPickInterval)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomObjectPicker_1<T>*>(objects, minimumPickInterval));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(::ArrayW<T,::Array<T>*>  objects, float_t  minimumPickInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, objects, minimumPickInterval);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::RandomObjectPicker_1<T>::PickRandomObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomObjectPicker_1<T>*>::get(),
                            "PickRandomObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
