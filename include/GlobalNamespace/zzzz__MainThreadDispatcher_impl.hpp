#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.DispatchOnMainThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)(::System::Action*)>(&::GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x226ca44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            "DispatchOnMainThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::Tick)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x226ca9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x226cba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  GlobalNamespace::MainThreadDispatcher::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MainThreadDispatcher::__set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*, 0x10>(this, std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*>(value));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* GlobalNamespace::MainThreadDispatcher::__get__dispatchQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*> GlobalNamespace::MainThreadDispatcher::__get__dispatchQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*, 0x10>(this);
}
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            "DispatchOnMainThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<typename A>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_1<A>*  action, A  firstParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<A>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action, firstParameter);
}
template<typename A,typename B>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_2<A,B>*  action, A  firstParameter, B  secondParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A,B>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action, firstParameter, secondParameter);
}
template<typename A,typename B,typename C>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_3<A,B,C>*  action, A  firstParameter, B  secondParameter, C  thirdParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<A,B,C>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action, firstParameter, secondParameter, thirdParameter);
}
template<typename A,typename B,typename C,typename D>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_4<A,B,C,D>*  action, A  firstParameter, B  secondParameter, C  thirdParameter, D  fourthParameter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                        "DispatchOnMainThread",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<A,B,C,D>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<D>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action, firstParameter, secondParameter, thirdParameter, fourthParameter);
}
inline void GlobalNamespace::MainThreadDispatcher::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MainThreadDispatcher* GlobalNamespace::MainThreadDispatcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainThreadDispatcher*>());
}
inline void GlobalNamespace::MainThreadDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__set_action(::System::Action_1<A>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<A>*, 0x10>(this, std::forward<::System::Action_1<A>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr ::System::Action_1<A>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action_1<A>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<A>*> GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action_1<A>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__set_firstParameter(A  value)  {
::cordl_internals::setInstanceField<A, 0x18>(this, std::forward<A>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_firstParameter()  {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A>
constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>());
}
template<::il2cpp_utils::il2cpp_reference_type A>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_action(::System::Action_2<A,B>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<A,B>*, 0x10>(this, std::forward<::System::Action_2<A,B>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::System::Action_2<A,B>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action_2<A,B>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<A,B>*> GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action_2<A,B>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_firstParameter(A  value)  {
::cordl_internals::setInstanceField<A, 0x18>(this, std::forward<A>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_firstParameter()  {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__set_secondParameter(B  value)  {
::cordl_internals::setInstanceField<B, 0x20>(this, std::forward<B>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_secondParameter()  {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>*>());
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A,B>*>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_action(::System::Action_3<A,B,C>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<A,B,C>*, 0x10>(this, std::forward<::System::Action_3<A,B,C>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr ::System::Action_3<A,B,C>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action_3<A,B,C>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<A,B,C>*> GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action_3<A,B,C>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_firstParameter(A  value)  {
::cordl_internals::setInstanceField<A, 0x18>(this, std::forward<A>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_firstParameter()  {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_secondParameter(B  value)  {
::cordl_internals::setInstanceField<B, 0x20>(this, std::forward<B>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_secondParameter()  {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__set_thirdParameter(C  value)  {
::cordl_internals::setInstanceField<C, 0x28>(this, std::forward<C>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr C& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_thirdParameter()  {
return ::cordl_internals::getInstanceField<C, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
constexpr C const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::__get_thirdParameter() const {
return ::cordl_internals::getInstanceField<C, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>*>());
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A,B,C>*>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_action(::System::Action_4<A,B,C,D>*  value)  {
::cordl_internals::setInstanceField<::System::Action_4<A,B,C,D>*, 0x10>(this, std::forward<::System::Action_4<A,B,C,D>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr ::System::Action_4<A,B,C,D>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_action()  {
return ::cordl_internals::getInstanceField<::System::Action_4<A,B,C,D>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<A,B,C,D>*> GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Action_4<A,B,C,D>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_firstParameter(A  value)  {
::cordl_internals::setInstanceField<A, 0x18>(this, std::forward<A>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_firstParameter()  {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_firstParameter() const {
return ::cordl_internals::getInstanceField<A, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_secondParameter(B  value)  {
::cordl_internals::setInstanceField<B, 0x20>(this, std::forward<B>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_secondParameter()  {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_secondParameter() const {
return ::cordl_internals::getInstanceField<B, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_thirdParameter(C  value)  {
::cordl_internals::setInstanceField<C, 0x28>(this, std::forward<C>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr C& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_thirdParameter()  {
return ::cordl_internals::getInstanceField<C, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr C const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_thirdParameter() const {
return ::cordl_internals::getInstanceField<C, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__set_fourthParameter(D  value)  {
::cordl_internals::setInstanceField<D, 0x30>(this, std::forward<D>(value));
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr D& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_fourthParameter()  {
return ::cordl_internals::getInstanceField<D, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
constexpr D const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::__get_fourthParameter() const {
return ::cordl_internals::getInstanceField<D, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>*>());
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type A,::il2cpp_utils::il2cpp_reference_type B,::il2cpp_utils::il2cpp_reference_type C,::il2cpp_utils::il2cpp_reference_type D>
inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>::_DispatchOnMainThread_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A,B,C,D>*>::get(),
                            "<DispatchOnMainThread>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
