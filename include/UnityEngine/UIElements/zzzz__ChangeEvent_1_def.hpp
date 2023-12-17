#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeEvent_1)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class ChangeEvent_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ChangeEvent_1);
// Type: UnityEngine.UIElements::ChangeEvent`1
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 1012 }), TypeDefinitionIndex(TypeDefinitionIndex(7181)), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 411 })
// CS Name: ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1<::UnityEngine::Vector2> : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector2>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector2>*>)]{};

/// @brief Field <previousValue>k__BackingField offset 0x7c
 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField)) ::UnityEngine::Vector2  _previousValue_k__BackingField;

/// @brief Field <newValue>k__BackingField offset 0x84
 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField)) ::UnityEngine::Vector2  _newValue_k__BackingField;

 __declspec(property(get=get_previousValue, put=set_previousValue)) ::UnityEngine::Vector2  previousValue;

 __declspec(property(get=get_newValue, put=set_newValue)) ::UnityEngine::Vector2  newValue;

constexpr void __set__previousValue_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__previousValue_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__previousValue_k__BackingField() const;

constexpr void __set__newValue_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__newValue_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __get__newValue_k__BackingField() const;

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_previousValue(::UnityEngine::Vector2  value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_newValue(::UnityEngine::Vector2  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector2>* GetPooled(::UnityEngine::Vector2  previousValue, ::UnityEngine::Vector2  newValue) ;

static inline ::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeEvent_1(ChangeEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeEvent_1(ChangeEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangeEvent_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), TypeDefinitionIndex(TypeDefinitionIndex(7181)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 1012 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 391 })
// CS Name: ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1<float_t> : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<float_t>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<float_t>*>)]{};

/// @brief Field <previousValue>k__BackingField offset 0x7c
 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField)) float_t  _previousValue_k__BackingField;

/// @brief Field <newValue>k__BackingField offset 0x80
 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField)) float_t  _newValue_k__BackingField;

 __declspec(property(get=get_previousValue, put=set_previousValue)) float_t  previousValue;

 __declspec(property(get=get_newValue, put=set_newValue)) float_t  newValue;

constexpr void __set__previousValue_k__BackingField(float_t  value) ;

constexpr float_t& __get__previousValue_k__BackingField() ;

constexpr float_t const& __get__previousValue_k__BackingField() const;

constexpr void __set__newValue_k__BackingField(float_t  value) ;

constexpr float_t& __get__newValue_k__BackingField() ;

constexpr float_t const& __get__newValue_k__BackingField() const;

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_previousValue(float_t  value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_newValue(float_t  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::ChangeEvent_1<float_t>* GetPooled(float_t  previousValue, float_t  newValue) ;

static inline ::UnityEngine::UIElements::ChangeEvent_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeEvent_1(ChangeEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeEvent_1(ChangeEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangeEvent_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 1012 }), TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), TypeDefinitionIndex(TypeDefinitionIndex(7181))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 105 })
// CS Name: ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1<bool> : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>)]{};

/// @brief Field <previousValue>k__BackingField offset 0x7c
 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField)) bool  _previousValue_k__BackingField;

/// @brief Field <newValue>k__BackingField offset 0x7d
 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField)) bool  _newValue_k__BackingField;

 __declspec(property(get=get_previousValue, put=set_previousValue)) bool  previousValue;

 __declspec(property(get=get_newValue, put=set_newValue)) bool  newValue;

constexpr void __set__previousValue_k__BackingField(bool  value) ;

constexpr bool& __get__previousValue_k__BackingField() ;

constexpr bool const& __get__previousValue_k__BackingField() const;

constexpr void __set__newValue_k__BackingField(bool  value) ;

constexpr bool& __get__newValue_k__BackingField() ;

constexpr bool const& __get__newValue_k__BackingField() const;

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_previousValue(bool  value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_newValue(bool  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::ChangeEvent_1<bool>* GetPooled(bool  previousValue, bool  newValue) ;

static inline ::UnityEngine::UIElements::ChangeEvent_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeEvent_1(ChangeEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeEvent_1(ChangeEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangeEvent_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 1012 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), TypeDefinitionIndex(TypeDefinitionIndex(7180)), TypeDefinitionIndex(TypeDefinitionIndex(7181))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 98 })
// CS Name: ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1<int32_t> : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<int32_t>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<int32_t>*>)]{};

/// @brief Field <previousValue>k__BackingField offset 0x7c
 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField)) int32_t  _previousValue_k__BackingField;

/// @brief Field <newValue>k__BackingField offset 0x80
 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField)) int32_t  _newValue_k__BackingField;

 __declspec(property(get=get_previousValue, put=set_previousValue)) int32_t  previousValue;

 __declspec(property(get=get_newValue, put=set_newValue)) int32_t  newValue;

constexpr void __set__previousValue_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__previousValue_k__BackingField() ;

constexpr int32_t const& __get__previousValue_k__BackingField() const;

constexpr void __set__newValue_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__newValue_k__BackingField() ;

constexpr int32_t const& __get__newValue_k__BackingField() const;

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_previousValue(int32_t  value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_newValue(int32_t  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::ChangeEvent_1<int32_t>* GetPooled(int32_t  previousValue, int32_t  newValue) ;

static inline ::UnityEngine::UIElements::ChangeEvent_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeEvent_1(ChangeEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeEvent_1(ChangeEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangeEvent_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1720 }), TypeDefinitionIndex(TypeDefinitionIndex(7181)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 1012 }), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7181), inst: 2 })
// CS Name: ::UnityEngine.UIElements::ChangeEvent`1<T>*
class CORDL_TYPE ChangeEvent_1<T> : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<T>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>)]{};

/// @brief Field <previousValue>k__BackingField offset 0x80
 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField)) T  _previousValue_k__BackingField;

/// @brief Field <newValue>k__BackingField offset 0x88
 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField)) T  _newValue_k__BackingField;

 __declspec(property(get=get_previousValue, put=set_previousValue)) T  previousValue;

 __declspec(property(get=get_newValue, put=set_newValue)) T  newValue;

constexpr void __set__previousValue_k__BackingField(T  value) ;

constexpr T& __get__previousValue_k__BackingField() ;

constexpr T const& __get__previousValue_k__BackingField() const;

constexpr void __set__newValue_k__BackingField(T  value) ;

constexpr T& __get__newValue_k__BackingField() ;

constexpr T const& __get__newValue_k__BackingField() const;

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_previousValue(T  value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_newValue(T  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* GetPooled(T  previousValue, T  newValue) ;

static inline ::UnityEngine::UIElements::ChangeEvent_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeEvent_1(ChangeEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeEvent_1(ChangeEvent_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangeEvent_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ChangeEvent_1, "UnityEngine.UIElements", "ChangeEvent`1");
