#pragma once
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
template<typename TStateTable,typename TType,typename TState>
inline TState GlobalNamespace::IStateTable_3<TStateTable,TType,TState>::GetState(TType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable,TType,TState>*>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TState, false>(*this, ___internal_method, type);
}
template<typename TStateTable,typename TType,typename TState>
inline void GlobalNamespace::IStateTable_3<TStateTable,TType,TState>::SetState(TType  type, TState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable,TType,TState>*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, state);
}
template<typename TStateTable,typename TType,typename TState>
inline TStateTable GlobalNamespace::IStateTable_3<TStateTable,TType,TState>::GetDelta(ByRef<TStateTable>  stateTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable,TType,TState>*>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TStateTable, false>(*this, ___internal_method, stateTable);
}
template<typename TStateTable,typename TType,typename TState>
inline TStateTable GlobalNamespace::IStateTable_3<TStateTable,TType,TState>::ApplyDelta(ByRef<TStateTable>  delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable,TType,TState>*>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TStateTable, false>(*this, ___internal_method, delta);
}
template<typename TStateTable,typename TType,typename TState>
inline int32_t GlobalNamespace::IStateTable_3<TStateTable,TType,TState>::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable,TType,TState>*>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
