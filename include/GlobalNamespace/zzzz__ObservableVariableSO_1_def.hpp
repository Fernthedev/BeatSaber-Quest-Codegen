#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObservableVariableSO_1)
namespace UnityEngine {
struct Vector2Int;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename T>
class IValue_1;
}
namespace GlobalNamespace {
class IObservableChange;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ObservableVariableSO_1;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<::UnityEngine::Vector2Int>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<::UnityEngine::Vector3>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class ObservableVariableSO_1<T>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class ObservableVariableSO_1<T>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<bool>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<double_t>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<float_t>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ObservableVariableSO_1);
// Type: ::ObservableVariableSO`1
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(15869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 3377 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<::UnityEngine::Vector2Int> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) ::UnityEngine::Vector2Int  _value;

 __declspec(property(get=get_value, put=set_value)) ::UnityEngine::Vector2Int  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<::UnityEngine::Vector2Int>"
constexpr operator  ::GlobalNamespace::IValue_1<::UnityEngine::Vector2Int>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(::UnityEngine::Vector2Int  value) ;

constexpr ::UnityEngine::Vector2Int& __get__value() ;

constexpr ::UnityEngine::Vector2Int const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(::UnityEngine::Vector2Int  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector2Int get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Vector2Int op_Implicit___UnityEngine__Vector2Int(::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector2Int>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector2Int>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 2704 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<double_t> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) double_t  _value;

 __declspec(property(get=get_value, put=set_value)) double_t  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<double_t>"
constexpr operator  ::GlobalNamespace::IValue_1<double_t>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(double_t  value) ;

constexpr double_t& __get__value() ;

constexpr double_t const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(double_t  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline double_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline double_t op_Implicit_double_t(::GlobalNamespace::ObservableVariableSO_1<double_t>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(15869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 974 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<T> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
constexpr operator  ::GlobalNamespace::IValue_1<T>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(T  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T op_Implicit_T(::GlobalNamespace::ObservableVariableSO_1<T>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 412 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<::UnityEngine::Vector3> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) ::UnityEngine::Vector3  _value;

 __declspec(property(get=get_value, put=set_value)) ::UnityEngine::Vector3  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<::UnityEngine::Vector3>"
constexpr operator  ::GlobalNamespace::IValue_1<::UnityEngine::Vector3>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__value() ;

constexpr ::UnityEngine::Vector3 const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(::UnityEngine::Vector3  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3 get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector3>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(15869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 391 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<float_t> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) float_t  _value;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<float_t>"
constexpr operator  ::GlobalNamespace::IValue_1<float_t>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(float_t  value) ;

constexpr float_t& __get__value() ;

constexpr float_t const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(float_t  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::ObservableVariableSO_1<float_t>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 105 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<bool> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) bool  _value;

 __declspec(property(get=get_value, put=set_value)) bool  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<bool>"
constexpr operator  ::GlobalNamespace::IValue_1<bool>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(bool  value) ;

constexpr bool& __get__value() ;

constexpr bool const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(bool  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Implicit_bool(::GlobalNamespace::ObservableVariableSO_1<bool>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 98 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<int32_t> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) int32_t  _value;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<int32_t>"
constexpr operator  ::GlobalNamespace::IValue_1<int32_t>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(int32_t  value) ;

constexpr int32_t& __get__value() ;

constexpr int32_t const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(int32_t  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::ObservableVariableSO_1<int32_t>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(15869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 2 })
// CS Name: ::ObservableVariableSO`1<T>*
class CORDL_TYPE ObservableVariableSO_1<T> : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field didChangeEvent offset 0x18
 __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent)) ::System::Action*  didChangeEvent;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
constexpr operator  ::GlobalNamespace::IValue_1<T>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
constexpr operator  ::GlobalNamespace::IObservableChange*() noexcept;

constexpr void __set_didChangeEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didChangeEvent() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void add_didChangeEvent(::System::Action*  value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void remove_didChangeEvent(::System::Action*  value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline void set_value(T  value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T op_Implicit_T(::GlobalNamespace::ObservableVariableSO_1<T>*  obj) ;

static inline ::GlobalNamespace::ObservableVariableSO_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObservableVariableSO_1(ObservableVariableSO_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObservableVariableSO_1(ObservableVariableSO_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObservableVariableSO_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ObservableVariableSO_1, "", "ObservableVariableSO`1");
