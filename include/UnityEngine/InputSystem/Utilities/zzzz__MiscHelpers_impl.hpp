#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MiscHelpers_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MiscHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TKey,typename TValue>
inline TValue UnityEngine::InputSystem::Utilities::MiscHelpers::GetValueOrDefault(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(),
                        "GetValueOrDefault",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, dictionary, key);
}
/// @param start: int32_t (default: static_cast<int32_t>(0x0))
template<typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::MiscHelpers::EveryNth(::System::Collections::Generic::IEnumerable_1<TValue>*  enumerable, int32_t  n, int32_t  start)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(),
                        "EveryNth",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(nullptr, ___internal_method, enumerable, n, start);
}
template<typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::MiscHelpers::IndexOf(::System::Collections::Generic::IEnumerable_1<TValue>*  enumerable, TValue  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumerable, value);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___2__current(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___2__current()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___2__current() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_enumerable(::System::Collections::Generic::IEnumerable_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__enumerable(::System::Collections::Generic::IEnumerable_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<TValue>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_start(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_start()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__start(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__start()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_n(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_n()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_n() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__n(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__n()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__n() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set__index_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get__index_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<TValue>*, 0x50>(this, std::forward<::System::Collections::Generic::IEnumerator_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<TValue>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TValue>*> UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<TValue>*, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_Generic_IEnumerator_TValue__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.Collections.Generic.IEnumerator<TValue>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
