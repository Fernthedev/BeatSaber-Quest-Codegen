#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IPoolable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Zenject::__PoolableManager__PoolableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PoolableManager__PoolableInfo::*)(::Zenject::IPoolable*, int32_t)>(&::Zenject::__PoolableManager__PoolableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f17358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager__PoolableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__PoolableManager__PoolableInfo::__set_Poolable(::Zenject::IPoolable*  value)  {
::cordl_internals::setInstanceField<::Zenject::IPoolable*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Zenject::IPoolable*>(value));
}
constexpr ::Zenject::IPoolable* Zenject::__PoolableManager__PoolableInfo::__get_Poolable()  {
return ::cordl_internals::getInstanceField<::Zenject::IPoolable*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> Zenject::__PoolableManager__PoolableInfo::__get_Poolable() const {
return ::cordl_internals::getInstanceField<::Zenject::IPoolable*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Zenject::__PoolableManager__PoolableInfo::__set_Priority(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Zenject::__PoolableManager__PoolableInfo::__get_Priority()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Zenject::__PoolableManager__PoolableInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Zenject::__PoolableManager__PoolableInfo::_ctor(::Zenject::IPoolable*  poolable, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager__PoolableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, poolable, priority);
}
// Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::__PoolableManager__PoolableInfo::__PoolableManager__PoolableInfo(::Zenject::IPoolable*  Poolable, int32_t  Priority) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Poolable = Poolable;
this->Priority = Priority;
}
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass2_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PoolableManager____c__DisplayClass2_0::*)()>(&::Zenject::__PoolableManager____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f17130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass2_0.__ctor_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::__PoolableManager__PoolableInfo (::Zenject::__PoolableManager____c__DisplayClass2_0::*)(::Zenject::IPoolable*)>(&::Zenject::__PoolableManager____c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2f179ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass2_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PoolableManager____c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f179c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass2_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PoolableManager____c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f17a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__PoolableManager____c__DisplayClass2_0::__set___4__this(::Zenject::PoolableManager*  value)  {
::cordl_internals::setInstanceField<::Zenject::PoolableManager*, 0x10>(this, std::forward<::Zenject::PoolableManager*>(value));
}
constexpr ::Zenject::PoolableManager* Zenject::__PoolableManager____c__DisplayClass2_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Zenject::PoolableManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::PoolableManager*> Zenject::__PoolableManager____c__DisplayClass2_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Zenject::PoolableManager*, 0x10>(this);
}
constexpr void Zenject::__PoolableManager____c__DisplayClass2_0::__set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>* Zenject::__PoolableManager____c__DisplayClass2_0::__get_priorities()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*> Zenject::__PoolableManager____c__DisplayClass2_0::__get_priorities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*, 0x18>(this);
}
inline ::Zenject::__PoolableManager____c__DisplayClass2_0* Zenject::__PoolableManager____c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__PoolableManager____c__DisplayClass2_0*>());
}
inline void Zenject::__PoolableManager____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::__PoolableManager__PoolableInfo Zenject::__PoolableManager____c__DisplayClass2_0::__ctor_b__0(::Zenject::IPoolable*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::__PoolableManager__PoolableInfo, false>(*this, ___internal_method, x);
}
inline ::System::Object* Zenject::__PoolableManager____c__DisplayClass2_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PoolableManager____c__DisplayClass2_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass2_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::__PoolableManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PoolableManager____c::*)()>(&::Zenject::__PoolableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f17c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c.__ctor_b__2_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__PoolableManager____c::*)(::Zenject::__PoolableManager__PoolableInfo)>(&::Zenject::__PoolableManager____c::__ctor_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f17c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<.ctor>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__PoolableManager__PoolableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c.__ctor_b__2_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IPoolable* (::Zenject::__PoolableManager____c::*)(::Zenject::__PoolableManager__PoolableInfo)>(&::Zenject::__PoolableManager____c::__ctor_b__2_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f17c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<.ctor>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__PoolableManager__PoolableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c._CreatePoolableInfo_b__3_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Zenject::__PoolableManager____c::*)(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*)>(&::Zenject::__PoolableManager____c::_CreatePoolableInfo_b__3_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f17c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<CreatePoolableInfo>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PoolableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f17cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PoolableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f17d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void Zenject::__PoolableManager____c::setStaticF___9(::Zenject::__PoolableManager____c*  value)  {
::cordl_internals::setStaticField<::Zenject::__PoolableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>(std::forward<::Zenject::__PoolableManager____c*>(value));
}
inline ::Zenject::__PoolableManager____c* Zenject::__PoolableManager____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Zenject::__PoolableManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>();
}
inline void Zenject::__PoolableManager____c::setStaticF___9__2_1(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>(std::forward<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* Zenject::__PoolableManager____c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>();
}
inline void Zenject::__PoolableManager____c::setStaticF___9__2_2(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>*, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>(std::forward<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>*>(value));
}
inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>* Zenject::__PoolableManager____c::getStaticF___9__2_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>*, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>();
}
inline void Zenject::__PoolableManager____c::setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>(std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>* Zenject::__PoolableManager____c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get>();
}
inline ::Zenject::__PoolableManager____c* Zenject::__PoolableManager____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__PoolableManager____c*>());
}
inline void Zenject::__PoolableManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t Zenject::__PoolableManager____c::__ctor_b__2_1(::Zenject::__PoolableManager__PoolableInfo  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<.ctor>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__PoolableManager__PoolableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x);
}
inline ::Zenject::IPoolable* Zenject::__PoolableManager____c::__ctor_b__2_2(::Zenject::__PoolableManager__PoolableInfo  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<.ctor>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__PoolableManager__PoolableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IPoolable*, false>(*this, ___internal_method, x);
}
inline ::System::Nullable_1<int32_t> Zenject::__PoolableManager____c::_CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "<CreatePoolableInfo>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(*this, ___internal_method, x);
}
inline ::System::Object* Zenject::__PoolableManager____c::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PoolableManager____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass3_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__PoolableManager____c__DisplayClass3_0::*)()>(&::Zenject::__PoolableManager____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f17350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass3_0._CreatePoolableInfo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__PoolableManager____c__DisplayClass3_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*)>(&::Zenject::__PoolableManager____c__DisplayClass3_0::_CreatePoolableInfo_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f17edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "<CreatePoolableInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass3_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__PoolableManager____c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f17f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__PoolableManager____c__DisplayClass3_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__PoolableManager____c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f17fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__PoolableManager____c__DisplayClass3_0::__set_poolable(::Zenject::IPoolable*  value)  {
::cordl_internals::setInstanceField<::Zenject::IPoolable*, 0x10>(this, std::forward<::Zenject::IPoolable*>(value));
}
constexpr ::Zenject::IPoolable* Zenject::__PoolableManager____c__DisplayClass3_0::__get_poolable()  {
return ::cordl_internals::getInstanceField<::Zenject::IPoolable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> Zenject::__PoolableManager____c__DisplayClass3_0::__get_poolable() const {
return ::cordl_internals::getInstanceField<::Zenject::IPoolable*, 0x10>(this);
}
inline ::Zenject::__PoolableManager____c__DisplayClass3_0* Zenject::__PoolableManager____c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__PoolableManager____c__DisplayClass3_0*>());
}
inline void Zenject::__PoolableManager____c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Zenject::__PoolableManager____c__DisplayClass3_0::_CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "<CreatePoolableInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
inline ::System::Object* Zenject::__PoolableManager____c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__PoolableManager____c__DisplayClass3_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PoolableManager____c__DisplayClass3_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::PoolableManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableManager::*)(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*)>(&::Zenject::PoolableManager::_ctor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2f16e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.CreatePoolableInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::__PoolableManager__PoolableInfo (::Zenject::PoolableManager::*)(::Zenject::IPoolable*, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*)>(&::Zenject::PoolableManager::CreatePoolableInfo)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2f17138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "CreatePoolableInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.TriggerOnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableManager::*)()>(&::Zenject::PoolableManager::TriggerOnSpawned)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2f17364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "TriggerOnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.TriggerOnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableManager::*)()>(&::Zenject::PoolableManager::TriggerOnDespawned)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f17480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "TriggerOnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::PoolableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2f1758c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::PoolableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f176a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::PoolableManager::__set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* Zenject::PoolableManager::__get__poolables()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*> Zenject::PoolableManager::__get__poolables() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*, 0x10>(this);
}
constexpr void Zenject::PoolableManager::__set__isSpawned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::PoolableManager::__get__isSpawned()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Zenject::PoolableManager::__get__isSpawned() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::Zenject::PoolableManager* Zenject::PoolableManager::New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  poolables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableManager*>(poolables, priorities));
}
inline void Zenject::PoolableManager::_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  poolables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, poolables, priorities);
}
inline ::Zenject::__PoolableManager__PoolableInfo Zenject::PoolableManager::CreatePoolableInfo(::Zenject::IPoolable*  poolable, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "CreatePoolableInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPoolable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::__PoolableManager__PoolableInfo, false>(*this, ___internal_method, poolable, priorities);
}
inline void Zenject::PoolableManager::TriggerOnSpawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "TriggerOnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::PoolableManager::TriggerOnDespawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "TriggerOnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* Zenject::PoolableManager::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::PoolableManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableManager*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
