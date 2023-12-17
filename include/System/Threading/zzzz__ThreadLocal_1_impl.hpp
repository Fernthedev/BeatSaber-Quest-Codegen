#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__set_Value(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(value));
}
template<typename T>
constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__get_Value()  {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__get_Value() const {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::__ThreadLocal_1__LinkedSlot<T>*", modifiers: "", def_value: Some("csnull") }]
template<typename T>
constexpr ::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>::__ThreadLocal_1__LinkedSlotVolatile(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  Value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->Value = Value;
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Next(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x10>(this, std::forward<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Next()  {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Next() const {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Previous(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x18>(this, std::forward<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Previous()  {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Previous() const {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x20>(this, std::forward<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_SlotArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__LinkedSlot<T>::__set_Value(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Value()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Threading::__ThreadLocal_1__LinkedSlot<T>::__get_Value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::__ThreadLocal_1__LinkedSlot<T>::New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(slotArray));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::__ThreadLocal_1__LinkedSlot<T>::_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slotArray);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__IdManager<T>::__set_m_nextIdToTry(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_nextIdToTry()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_nextIdToTry() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__IdManager<T>::__set_m_freeIds(::System::Collections::Generic::List_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<bool>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<bool>* System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_freeIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> System::Threading::__ThreadLocal_1__IdManager<T>::__get_m_freeIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Threading::__ThreadLocal_1__IdManager<T>::GetId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::__ThreadLocal_1__IdManager<T>::ReturnId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(),
                            "ReturnId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::__ThreadLocal_1__IdManager<T>* System::Threading::__ThreadLocal_1__IdManager<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__IdManager<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::__ThreadLocal_1__IdManager<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__IdManager<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x10>(this, std::forward<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_SlotArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_SlotArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__set_m_trackAllValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_m_trackAllValues()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Threading::__ThreadLocal_1__FinalizationHelper<T>::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* System::Threading::__ThreadLocal_1__FinalizationHelper<T>::New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, bool  trackAllValues)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>(slotArray, trackAllValues));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, bool  trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slotArray, trackAllValues);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::__ThreadLocal_1__FinalizationHelper<T>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Threading::ThreadLocal_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_valueFactory(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* System::Threading::ThreadLocal_1<T>::__get_m_valueFactory()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> System::Threading::ThreadLocal_1<T>::__get_m_valueFactory() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_slotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(std::forward<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> System::Threading::ThreadLocal_1<T>::getStaticF_ts_slotArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>, "ts_slotArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::setStaticF_ts_finalizationHelper(::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*  value)  {
::cordl_internals::setStaticField<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(std::forward<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* System::Threading::ThreadLocal_1<T>::getStaticF_ts_finalizationHelper()  {
return ::cordl_internals::getStaticField<::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*, "ts_finalizationHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_idComplement(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Threading::ThreadLocal_1<T>::__get_m_idComplement()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Threading::ThreadLocal_1<T>::__get_m_idComplement() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Threading::ThreadLocal_1<T>::__get_m_initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Threading::ThreadLocal_1<T>::__get_m_initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::setStaticF_s_idManager(::System::Threading::__ThreadLocal_1__IdManager<T>*  value)  {
::cordl_internals::setStaticField<::System::Threading::__ThreadLocal_1__IdManager<T>*, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>(std::forward<::System::Threading::__ThreadLocal_1__IdManager<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::__ThreadLocal_1__IdManager<T>* System::Threading::ThreadLocal_1<T>::getStaticF_s_idManager()  {
return ::cordl_internals::getStaticField<::System::Threading::__ThreadLocal_1__IdManager<T>*, "s_idManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_linkedSlot(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x20>(this, std::forward<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* System::Threading::ThreadLocal_1<T>::__get_m_linkedSlot()  {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> System::Threading::ThreadLocal_1<T>::__get_m_linkedSlot() const {
return ::cordl_internals::getInstanceField<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::ThreadLocal_1<T>::__set_m_trackAllValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Threading::ThreadLocal_1<T>::__get_m_trackAllValues()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Threading::ThreadLocal_1<T>::__get_m_trackAllValues() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::ThreadLocal_1<T>* System::Threading::ThreadLocal_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ThreadLocal_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::Initialize(::System::Func_1<T>*  valueFactory, bool  trackAllValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, valueFactory, trackAllValues);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW System::Threading::ThreadLocal_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Threading::ThreadLocal_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Threading::ThreadLocal_1<T>::GetValueSlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "GetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::SetValueSlow(T  value, ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "SetValueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, slotArray);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::CreateLinkedSlot(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, int32_t  id, T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "CreateLinkedSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slotArray, id, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Threading::ThreadLocal_1<T>::get_IsValueCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "get_IsValueCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::ThreadLocal_1<T>::GrowTable(ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>  table, int32_t  minLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, table, minLength);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Threading::ThreadLocal_1<T>::GetNewTableSize(int32_t  minSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ThreadLocal_1<T>*>::get(),
                            "GetNewTableSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, minSize);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
