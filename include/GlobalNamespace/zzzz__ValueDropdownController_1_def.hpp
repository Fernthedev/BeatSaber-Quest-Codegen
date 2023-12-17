#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueDropdownController_1)
namespace HMUI {
class DropdownWithTableView;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace GlobalNamespace {
template<typename T>
class __ValueDropdownController_1____c;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ValueDropdownController_1;
}
namespace GlobalNamespace {
template<typename T>
class __ValueDropdownController_1____c;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class ValueDropdownController_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class ValueDropdownController_1<T>;
}
namespace GlobalNamespace {
template<>
class ValueDropdownController_1<float_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class __ValueDropdownController_1____c<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ValueDropdownController_1____c<T>;
}
namespace GlobalNamespace {
template<>
class __ValueDropdownController_1____c<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ValueDropdownController_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ValueDropdownController_1____c);
// Type: ::<>c
// Type: ::ValueDropdownController`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5601)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5601), inst: 974 })
// CS Name: ::ValueDropdownController`1::<>c<T>*
class CORDL_TYPE __ValueDropdownController_1____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<T>*  value) ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* getStaticF___9() ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T,::StringW>*,::StringW>*  value) ;

static inline ::System::Func_2<::System::Tuple_2<T,::StringW>*,::StringW>* getStaticF___9__9_0() ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__9_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _Start_b__9_0(::System::Tuple_2<T,::StringW>*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueDropdownController_1____c(__ValueDropdownController_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueDropdownController_1____c(__ValueDropdownController_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueDropdownController_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__9_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5601))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5601), inst: 391 })
// CS Name: ::ValueDropdownController`1::<>c<T>*
class CORDL_TYPE __ValueDropdownController_1____c<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<float_t>*  value) ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<float_t>* getStaticF___9() ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<float_t,::StringW>*,::StringW>*  value) ;

static inline ::System::Func_2<::System::Tuple_2<float_t,::StringW>*,::StringW>* getStaticF___9__9_0() ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__9_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _Start_b__9_0(::System::Tuple_2<float_t,::StringW>*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueDropdownController_1____c(__ValueDropdownController_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueDropdownController_1____c(__ValueDropdownController_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueDropdownController_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__9_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5601)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5601), inst: 2 })
// CS Name: ::ValueDropdownController`1::<>c<T>*
class CORDL_TYPE __ValueDropdownController_1____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<T>*  value) ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* getStaticF___9() ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T,::StringW>*,::StringW>*  value) ;

static inline ::System::Func_2<::System::Tuple_2<T,::StringW>*,::StringW>* getStaticF___9__9_0() ;

static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__9_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW _Start_b__9_0(::System::Tuple_2<T,::StringW>*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ValueDropdownController_1____c(__ValueDropdownController_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ValueDropdownController_1____c(__ValueDropdownController_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ValueDropdownController_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__9_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5602)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 974 })
// CS Name: ::ValueDropdownController`1<T>*
class CORDL_TYPE ValueDropdownController_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__ValueDropdownController_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _simpleTextDropdown offset 0x18
 __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown)) ::HMUI::SimpleTextDropdown*  _simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent offset 0x20
 __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent)) ::System::Action_2<int32_t,T>*  didSelectCellWithIdxEvent;

/// @brief Field _namedValues offset 0x28
 __declspec(property(get=__get__namedValues, put=__set__namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  _namedValues;

 __declspec(property(get=get_innerDropdown)) ::HMUI::SimpleTextDropdown*  innerDropdown;

 __declspec(property(get=get_namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  namedValues;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown*  value) ;

constexpr ::HMUI::SimpleTextDropdown* __get__simpleTextDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> __get__simpleTextDropdown() const;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

constexpr ::System::Action_2<int32_t,T>* __get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,T>*> __get_didSelectCellWithIdxEvent() const;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* __get__namedValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*> __get__namedValues() const;

/// @brief Method get_innerDropdown addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::HMUI::SimpleTextDropdown* get_innerDropdown() ;

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SelectCellWithValue(T  value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetIdxForValue(T  value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::ValueDropdownController_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueDropdownController_1(ValueDropdownController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueDropdownController_1(ValueDropdownController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueDropdownController_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5602))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 391 })
// CS Name: ::ValueDropdownController`1<T>*
class CORDL_TYPE ValueDropdownController_1<float_t> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__ValueDropdownController_1____c<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _simpleTextDropdown offset 0x18
 __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown)) ::HMUI::SimpleTextDropdown*  _simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent offset 0x20
 __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent)) ::System::Action_2<int32_t,float_t>*  didSelectCellWithIdxEvent;

/// @brief Field _namedValues offset 0x28
 __declspec(property(get=__get__namedValues, put=__set__namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>*  _namedValues;

 __declspec(property(get=get_innerDropdown)) ::HMUI::SimpleTextDropdown*  innerDropdown;

 __declspec(property(get=get_namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>*  namedValues;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown*  value) ;

constexpr ::HMUI::SimpleTextDropdown* __get__simpleTextDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> __get__simpleTextDropdown() const;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t>*  value) ;

constexpr ::System::Action_2<int32_t,float_t>* __get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,float_t>*> __get_didSelectCellWithIdxEvent() const;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>* __get__namedValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>*> __get__namedValues() const;

/// @brief Method get_innerDropdown addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::HMUI::SimpleTextDropdown* get_innerDropdown() ;

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>* get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>*>* GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SelectCellWithValue(float_t  value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetIdxForValue(float_t  value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::ValueDropdownController_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueDropdownController_1(ValueDropdownController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueDropdownController_1(ValueDropdownController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueDropdownController_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5602))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 2 })
// CS Name: ::ValueDropdownController`1<T>*
class CORDL_TYPE ValueDropdownController_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__ValueDropdownController_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _simpleTextDropdown offset 0x18
 __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown)) ::HMUI::SimpleTextDropdown*  _simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent offset 0x20
 __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent)) ::System::Action_2<int32_t,T>*  didSelectCellWithIdxEvent;

/// @brief Field _namedValues offset 0x28
 __declspec(property(get=__get__namedValues, put=__set__namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  _namedValues;

 __declspec(property(get=get_innerDropdown)) ::HMUI::SimpleTextDropdown*  innerDropdown;

 __declspec(property(get=get_namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  namedValues;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown*  value) ;

constexpr ::HMUI::SimpleTextDropdown* __get__simpleTextDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> __get__simpleTextDropdown() const;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

constexpr ::System::Action_2<int32_t,T>* __get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,T>*> __get_didSelectCellWithIdxEvent() const;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* __get__namedValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>*> __get__namedValues() const;

/// @brief Method get_innerDropdown addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::HMUI::SimpleTextDropdown* get_innerDropdown() ;

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T>*  value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>*>* GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SelectCellWithValue(T  value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetIdxForValue(T  value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::ValueDropdownController_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueDropdownController_1(ValueDropdownController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueDropdownController_1(ValueDropdownController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValueDropdownController_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ValueDropdownController_1, "", "ValueDropdownController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ValueDropdownController_1____c, "", "ValueDropdownController`1/<>c");
