#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "Zenject/zzzz__TaskUpdater_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::__TaskUpdater_1__TaskInfo<TTask>::__set_Task(TTask  value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this, std::forward<TTask>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr TTask& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_Task()  {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr TTask const& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_Task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::__TaskUpdater_1__TaskInfo<TTask>::__set_Priority(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr int32_t& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_Priority()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr int32_t const& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::__TaskUpdater_1__TaskInfo<TTask>::__set_IsRemoved(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr bool& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_IsRemoved()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr bool const& Zenject::__TaskUpdater_1__TaskInfo<TTask>::__get_IsRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::__TaskUpdater_1__TaskInfo<TTask>* Zenject::__TaskUpdater_1__TaskInfo<TTask>::New_ctor(TTask  task, int32_t  priority)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>(task, priority));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::__TaskUpdater_1__TaskInfo<TTask>::_ctor(TTask  task, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task, priority);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Object* Zenject::__TaskUpdater_1__TaskInfo<TTask>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::InjectTypeInfo* Zenject::__TaskUpdater_1__TaskInfo<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::__TaskUpdater_1____c<TTask>::setStaticF___9(::Zenject::__TaskUpdater_1____c<TTask>*  value)  {
::cordl_internals::setStaticField<::Zenject::__TaskUpdater_1____c<TTask>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get>(std::forward<::Zenject::__TaskUpdater_1____c<TTask>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::__TaskUpdater_1____c<TTask>* Zenject::__TaskUpdater_1____c<TTask>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Zenject::__TaskUpdater_1____c<TTask>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::__TaskUpdater_1____c<TTask>::setStaticF___9__7_0(::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get>(std::forward<::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>* Zenject::__TaskUpdater_1____c<TTask>::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*,TTask>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::__TaskUpdater_1____c<TTask>* Zenject::__TaskUpdater_1____c<TTask>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__TaskUpdater_1____c<TTask>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::__TaskUpdater_1____c<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline TTask Zenject::__TaskUpdater_1____c<TTask>::_AddTaskInternal_b__7_0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get(),
                            "<AddTaskInternal>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TTask, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Object* Zenject::__TaskUpdater_1____c<TTask>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::InjectTypeInfo* Zenject::__TaskUpdater_1____c<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c<TTask>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::__set_task(TTask  value)  {
::cordl_internals::setInstanceField<TTask, 0x10>(this, std::forward<TTask>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr TTask& Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::__get_task()  {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr TTask const& Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::__get_task() const {
return ::cordl_internals::getInstanceField<TTask, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>* Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline bool Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::_RemoveTask_b__0(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>*>::get(),
                            "<RemoveTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Object* Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::InjectTypeInfo* Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__TaskUpdater_1____c__DisplayClass8_0<TTask>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::TaskUpdater_1<TTask>::__set__tasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x10>(this, std::forward<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr ::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::__get__tasks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> Zenject::TaskUpdater_1<TTask>::__get__tasks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr void Zenject::TaskUpdater_1<TTask>::__set__queuedTasks(::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr ::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::__get__queuedTasks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*> Zenject::TaskUpdater_1<TTask>::__get__queuedTasks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_AllTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "get_AllTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>* Zenject::TaskUpdater_1<TTask>::get_ActiveTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "get_ActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::AddTask(TTask  task, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "AddTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task, priority);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::AddTaskInternal(TTask  task, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "AddTaskInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task, priority);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::RemoveTask(TTask  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "RemoveTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::OnFrameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "OnFrameStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::UpdateAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "UpdateAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::UpdateRange(int32_t  minPriority, int32_t  maxPriority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "UpdateRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, minPriority, maxPriority);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::ClearRemovedTasks(::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*  tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "ClearRemovedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedList_1<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tasks);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::AddQueuedTasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "AddQueuedTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::InsertTaskSorted(::Zenject::__TaskUpdater_1__TaskInfo<TTask>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "InsertTaskSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__TaskUpdater_1__TaskInfo<TTask>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::UpdateItem(TTask  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "UpdateItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TTask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, task);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::TaskUpdater_1<TTask>* Zenject::TaskUpdater_1<TTask>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::TaskUpdater_1<TTask>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline void Zenject::TaskUpdater_1<TTask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TTask>
inline ::Zenject::InjectTypeInfo* Zenject::TaskUpdater_1<TTask>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::TaskUpdater_1<TTask>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
