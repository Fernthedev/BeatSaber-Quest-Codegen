#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TypedUxmlAttributeDescription_1)
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class TypedUxmlAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class TypedUxmlAttributeDescription_1<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class TypedUxmlAttributeDescription_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<int32_t>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1);
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), TypeDefinitionIndex(TypeDefinitionIndex(6981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 974 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<T> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) T  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) T  defaultValue;

constexpr void __set__defaultValue_k__BackingField(T  value) ;

constexpr T& __get__defaultValue_k__BackingField() ;

constexpr T const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(T  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), TypeDefinitionIndex(TypeDefinitionIndex(6981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 391 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<float_t> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) float_t  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) float_t  defaultValue;

constexpr void __set__defaultValue_k__BackingField(float_t  value) ;

constexpr float_t& __get__defaultValue_k__BackingField() ;

constexpr float_t const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(float_t  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6981)), TypeDefinitionIndex(TypeDefinitionIndex(6982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 333 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<int64_t> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) int64_t  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) int64_t  defaultValue;

constexpr void __set__defaultValue_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__defaultValue_k__BackingField() ;

constexpr int64_t const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(int64_t  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6981)), TypeDefinitionIndex(TypeDefinitionIndex(6982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 105 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<bool> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) bool  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) bool  defaultValue;

constexpr void __set__defaultValue_k__BackingField(bool  value) ;

constexpr bool& __get__defaultValue_k__BackingField() ;

constexpr bool const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(bool  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), TypeDefinitionIndex(TypeDefinitionIndex(6981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 98 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<int32_t> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) int32_t  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) int32_t  defaultValue;

constexpr void __set__defaultValue_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__defaultValue_k__BackingField() ;

constexpr int32_t const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(int32_t  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), TypeDefinitionIndex(TypeDefinitionIndex(6981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 2 })
// CS Name: ::UnityEngine.UIElements::TypedUxmlAttributeDescription`1<T>*
class CORDL_TYPE TypedUxmlAttributeDescription_1<T> : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UxmlAttributeDescription)]{};

/// @brief Field <defaultValue>k__BackingField offset 0x40
 __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField)) T  _defaultValue_k__BackingField;

 __declspec(property(get=get_defaultValue, put=set_defaultValue)) T  defaultValue;

constexpr void __set__defaultValue_k__BackingField(T  value) ;

constexpr T& __get__defaultValue_k__BackingField() ;

constexpr T const& __get__defaultValue_k__BackingField() const;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_defaultValue(T  value) ;

static inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypedUxmlAttributeDescription_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1, "UnityEngine.UIElements", "TypedUxmlAttributeDescription`1");
