#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor_1)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
namespace UnityEngine {
struct Quaternion;
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
class InputProcessor_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<::UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
class InputProcessor_1<TValue>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<bool>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<double_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<float_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<int32_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<uint32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor_1);
// Type: UnityEngine.InputSystem::InputProcessor`1
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3896 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState Process(::UnityEngine::InputSystem::LowLevel::TouchState  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3894 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::PoseState Process(::UnityEngine::InputSystem::XR::PoseState  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3893 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::Eyes Process(::UnityEngine::InputSystem::XR::Eyes  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3892 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::InputSystem::XR::Bone> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::Bone Process(::UnityEngine::InputSystem::XR::Bone  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3342 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::Quaternion> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 2704 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<double_t> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t Process(double_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 974 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<TValue> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline TValue Process(TValue  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 753 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<uint32_t> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline uint32_t Process(uint32_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 412 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::Vector3> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<::UnityEngine::Vector2> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 391 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<float_t> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Process(float_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 105 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<bool> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Process(bool  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6235)), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 98 })
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1<int32_t> : public ::UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor)]{};

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Process(int32_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::InputProcessor_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor_1(InputProcessor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor_1(InputProcessor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputProcessor_1, "UnityEngine.InputSystem", "InputProcessor`1");
