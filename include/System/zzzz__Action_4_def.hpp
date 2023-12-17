#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Action_4)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T4>
class Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2,int32_t,T4>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
class Action_4<T1,::UnityEngine::Color,T3,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
class Action_4<T1,T2,T3,T4>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
class Action_4<T1,T2,T3,int64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Action_4<T1,double_t,int64_t,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T4>
class Action_4<T1,int64_t,float_t,T4>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T4>
class Action_4<int32_t,T2,bool,T4>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Action_4<int32_t,T2,int32_t,int32_t>;
}
namespace System {
template<>
class Action_4<int32_t,int32_t,float_t,int32_t>;
}
namespace System {
template<>
class Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>;
}
namespace System {
template<>
class Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T4>
class Action_4<uint64_t,bool,::System::Guid,T4>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_4);
// Type: System::Action`4
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6481 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<uint64_t,bool,::System::Guid,T4> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<uint64_t,bool,::System::Guid,T4>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, bool  arg2, ::System::Guid  arg3, T4  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6480 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,T2,T3,int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,T2,T3,int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3, int64_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6479 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,int64_t,float_t,T4> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,int64_t,float_t,T4>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, int64_t  arg2, float_t  arg3, T4  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6478 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,double_t,int64_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,double_t,int64_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, double_t  arg2, int64_t  arg3, int32_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6477 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, double_t  arg2, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg3, int64_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6476 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,::UnityEngine::Color,T3,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,::UnityEngine::Color,T3,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, ::UnityEngine::Color  arg2, T3  arg3, int32_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6475 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<int32_t,T2,int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<int32_t,T2,int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, T2  arg2, int32_t  arg3, int32_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6474 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<int32_t,T2,bool,T4> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<int32_t,T2,bool,T4>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, T2  arg2, bool  arg3, T4  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6473 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2,int32_t,T4> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2,int32_t,T4>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  arg1, T2  arg2, int32_t  arg3, T4  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6124 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<T1,T2,T3,T4> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<T1,T2,T3,T4>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 5609 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<int32_t,int32_t,float_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<int32_t,int32_t,float_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg1, int32_t  arg2, float_t  arg3, int32_t  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 697 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<uint64_t,::GlobalNamespace::OVRSpace,bool,::System::Guid>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, ::GlobalNamespace::OVRSpace  arg2, bool  arg3, ::System::Guid  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 696 })
// CS Name: ::System::Action`4<T1,T2,T3,T4>*
class CORDL_TYPE Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_4<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, bool  arg2, ::GlobalNamespace::OVRSpace  arg3, ::System::Guid  arg4) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_4(Action_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_4(Action_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_4, "System", "Action`4");
