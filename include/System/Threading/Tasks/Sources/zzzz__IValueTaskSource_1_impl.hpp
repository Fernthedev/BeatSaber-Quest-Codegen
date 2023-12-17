#pragma once
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
template<typename TResult>
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(),
                            "GetStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(*this, ___internal_method, token);
}
template<typename TResult>
inline void System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, continuation, state, token, flags);
}
template<typename TResult>
inline TResult System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(*this, ___internal_method, token);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
