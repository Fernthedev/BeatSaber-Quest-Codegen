#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingComposite_1)
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputBindingComposite_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputBindingComposite_1);
// Type: UnityEngine.InputSystem::InputBindingComposite`1
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189)), TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 3342 })
// CS Name: ::UnityEngine.InputSystem::InputBindingComposite`1<TValue>*
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Quaternion> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputBindingComposite)]{};

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Quaternion ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBindingComposite_1(InputBindingComposite_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBindingComposite_1(InputBindingComposite_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputBindingComposite_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189)), TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 412 })
// CS Name: ::UnityEngine.InputSystem::InputBindingComposite`1<TValue>*
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Vector3> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputBindingComposite)]{};

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBindingComposite_1(InputBindingComposite_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBindingComposite_1(InputBindingComposite_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputBindingComposite_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6190)), TypeDefinitionIndex(TypeDefinitionIndex(6189))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 411 })
// CS Name: ::UnityEngine.InputSystem::InputBindingComposite`1<TValue>*
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Vector2> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputBindingComposite)]{};

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector2 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBindingComposite_1(InputBindingComposite_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBindingComposite_1(InputBindingComposite_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputBindingComposite_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189)), TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 391 })
// CS Name: ::UnityEngine.InputSystem::InputBindingComposite`1<TValue>*
class CORDL_TYPE InputBindingComposite_1<float_t> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputBindingComposite)]{};

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::InputBindingComposite_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBindingComposite_1(InputBindingComposite_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBindingComposite_1(InputBindingComposite_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputBindingComposite_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputBindingComposite_1, "UnityEngine.InputSystem", "InputBindingComposite`1");
